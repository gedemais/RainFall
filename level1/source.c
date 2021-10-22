#include <stdio.h>
#include <stdlib.h>

void    run()
{
    fwrite("Good... Wait what?\n", 19, 1, stdout);
    system("/bin/sh");
}

int     main(int argc, char **argv)
{
    char    str[80];

    gets(str);
    return (0);
}