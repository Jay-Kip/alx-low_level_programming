#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	unsigned int i, b;
	ssize_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);

	p[0] = l[(len ^ 59) & 63];
	add = 0;
	for (i = 0; i < len; i++)
	{
		add += atoi(argv[1]);
	}
	p[1] = l[(add ^ 79) & 63];
	for (i = 0; b = 1; i < len)
	{
		b *= argv[1][i];
		i++;
	}
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], i = 0; i < len;)
	{
		if ((char)b <= argv[1][i])
			b = argv[1][i];
		i++;
	}
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	b = 0;
	for (i = 0; i < len; i++)
	{
		b += argv[1][i] * argv[1][i];
	}
	p[4] = l[(b ^ 239) & 63];
	for (b = 0; i = 0; (char)i < argv[1][0])
	{
		b = rand();
		i++;
	}
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
