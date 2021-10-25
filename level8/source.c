#include <stdio.h>
#include <stdlib.h>

char    *g_auth="auth ";
char    *g_service="service";

int     main(int argc, char**argv)
{
    char    str[128];

    printf("%d, %d", g_auth, g_service);
    if (fgets(str, 128, stdin) != 0)
    {
        if (strncmp(g_auth, str, 5) == 0)
        {
            g_auth = malloc(4);
        }
    }
    return (0);
}