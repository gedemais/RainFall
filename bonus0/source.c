#include <stdio.h>
#include <stdlib.h>

void    p(char *ptr, const char *ptr2)
{
    char    buffer[4096];
    char    *str;

    puts(ptr2);
    read(0, buffer, 4096);
    str = strchr(buffer, 10);
    *str = '\0';
    strncpy(ptr, buffer, 20);

    return;
}

void    pp(char *buf)
{
    char    str[20];
    char    str2[20];

    p(str, " - ");
    p(str2, " - ");
    strcpy(buf, str);
    buf[strlen(buf)] = 32;
    strcat(buf, str2);

    return;
}

int     main(void)
{
    char    buf[54];

    pp(buf);
    puts(buf);

    return (0);
}