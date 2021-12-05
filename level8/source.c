#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *auth;
char    *service;

int     main(int argc, char**argv)
{
    char    str[128];

	while (1)
	{
		printf("%p, %p\n", auth, service);
		if (fgets(str, 128, stdin) != 0)
		{
			if (strncmp("auth ", str, 5) == 0)
			{
				auth = malloc(4);
				*(int*)auth = 0;
				if (strlen(str + 5) <= 30)
					strcpy(auth, str + 5);
			}
			if (strncmp("reset", str, 5) == 0)
				free(auth);
			if (strncmp("service", str, 6) == 0)
				service = strdup(str + 7);
			if (strncmp("login", str, 5) == 0)
			{
				if (auth[32] != 0)
					system("/bin/sh");
				else
					fwrite("Password:\n", 1, 10, stdout);
			}
		}
	}
    return (0);
}
