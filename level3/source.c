#include <stdio.h>
#include <stdlib.h>

void    v(void)
{
    char    str[520];
    int     m;

    fgets(str, 512, stdin);
    m = printf(str);
    if (m == 64)
    {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");   
    }
    return ();
}

int     main(int argc, char **argv)
{
    v();
    return (0);
}