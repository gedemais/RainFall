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
    char    str[20];
    char    str2[20];

    p(str, '-');
    p(str2, '-');
    strcpy(buf, str);
    buf[strlen(buf)] = ' ';

    return (strcat(buf, str2));
}

int     main(int argc, char**argv)
{
    char    buf[54];

    pp(buf);
    puts(buf);
    return (0);
}