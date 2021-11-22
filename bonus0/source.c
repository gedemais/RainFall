#include <stdio.h>
#include <stdlib.h>

char    *p(char *ptr, const char *ptr2)
{
    char    buffer[4096];

    puts(ptr2);
    read(0, buffer, 4096);
    buffer[strchr(buffer, '\n')] = '\0';
    return (strncpy(ptr, buffer, 20));
}

char    *pp(char *buf)
{
    
}

int     main(int argc, char**argv)
{
    char    buf[64];

    pp(buf);
    puts(buf);
    return (0);
}