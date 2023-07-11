#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>



void chk_el(unsigned char * e_ident);
void prnt_mgc(unsigned char *e_ident);
void prnt_clss(unsigned char * e_ident);
void prnt_data(unsigned char *e_ident);
void prnt_ver(unsigned char *e_ident);
void prnt_osabi(unsigned char *e_ident);
void prnt_abi(unsigned char *e_ident);
void prnt_typ(unsigned int e_type, unsigned char *e_ident);
void prnt_ent(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);



int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;
	
	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if ( r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	chk_el(header->e_ident);
	printf("ELF Header:\n");
	prnt_mgc(header->e_ident);
	prnt_clss(header->e_ident);
	prnt_osabi(header->e_ident);
	prnt_data(header->e_ident);
	prnt_ver(header->e_ident);
	prnt_abi(header->e_ident);
	prnt_typ(header->e_type, header->e_ident);
	prnt_ent(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}


void chk_el(unsigned char * e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void prnt_mgc(unsigned char *e_ident)
{
	int i;
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

void prnt_clss(unsigned char * e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>n", e_ident[EI_CLASS]);
	}
}




void prnt_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

void prnt_ver(unsigned char *e_ident)
{
	printf("  Version:                           %d",
				       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}



void prnt_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX-Systen V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX-HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX-NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX-Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX-FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX-TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}


void prnt_abi(unsigned char * e_ident)
{
	printf("  ABI Version:                       %d\n",
				       e_ident[EI_ABIVERSION]);
}


void prnt_typ(unsigned int e_type, unsigned char * e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE(None)\n");
			break;
		case ET_REL:
			printf("REL (Relocateable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Excecutable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}


void prnt_ent(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}


void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
