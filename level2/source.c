#include <stdio.h>
// buffer size suspected to be 64.
void	p(void)
{
	int		prot; // Will be pushed first on the stack, so that we can check the 4 bytes following the buffer.
	char	buffer[76];

	fflush(stdout);
	gets(buffer);
	if ((prot & 0xb0000000) == 0xb0000000)
	{
		printf("%p\n", (void*)prot);
		exit(1);
	}

	puts(buffer);
	strdup(buffer);
	return;
}

int		main(void)
{
	p();
	return (0);
}
