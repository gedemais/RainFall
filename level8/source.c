#include <stdio.h>
#include <stdlib.h>

char    *g_auth;
char    *g_service;

int     main(int argc, char**argv)
{
    char    str[128];

    printf("%p, %p\n", g_auth, g_service);
    if (fgets(str, 128, stdin) != 0)
    {
        if (strncmp(g_auth, str, 5) == 0)
        {
            g_auth = malloc(4);
            g_auth[0] = 0;
        }
    }
    return (0);
}