#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int         main(int argc, char**argv)
{
    int     nb;
    char    str[64];

    nb = atoi(argv[1]);
    if(nb > 9)
    {
        memcpy(str, argv[2], (nb + 4));
        if (nb == 1464814662)
        {
            execl("sh", "/bin/sh", 0);
        }
        return (0);
    }
    return(1);
}