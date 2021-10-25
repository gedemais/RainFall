#include <stdio.h>
#include <stdlib.h>

int		n(void)
{
	return (system("/bin/cat /home/user/level7/.pass"));
}

int		m(void)
{
	return (puts("Nope"));
}

int     main(int argc, char**argv)
{
	char	*a;
	char	*b;
	int		(*func)(void) = NULL;

	a = malloc(64);
	b = malloc(4);
	strcpy(a, argv[1]);
	func = b;
	(*func)();
    return (0);
}
