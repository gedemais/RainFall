#include <stdio.h>

int     run()
{
    fwrite("Good... Wait what?\n", 19, 1, stdout);
    system("/bin/sh");
    return (0);
}

int     main(int argc, char **argv)
{
    char    str[80];

    gets(str);
    return (0);
}