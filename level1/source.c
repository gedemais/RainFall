#include <stdio.h>
#include <stdlib.h>

void    run(void)
{
    fwrite("Good... Wait what?\n", 19, 1, stdout);
    system("/bin/sh");
    return;
}

int     main(int argc, char **argv)
{
    char    str[76];

    gets(str);
    return (0);
}