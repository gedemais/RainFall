#include <stdio.h>
#include <stdlib.h>

int		n(void)
{
	system("/bin/cat /home/user/level7/.pass");
	return;
}

void	m(void)
{
	puts("Nope");
	return;
}

int     main(int argc, char**argv)
{
	char	*a;
	char	*b;
	void	(*func)(void) = NULL;

	a = malloc(64);
	b = malloc(4);
	strcpy(a, argv[1]);
	func = b;
	func();
    return (0);
}
