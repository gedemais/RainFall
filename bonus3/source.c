#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char**argv)
{
    int     fd;
    char    buff[66];
    char    buff2[65];

    fd = fopen("/home/usr/end/.pass", "r");
    memset(buff, 0, 33);
    if (fd == 0 || argc != 2)
        return (-1);
    fread(buff, 1, 66, fd);
    buff[66] = '\0';
    buff[atoi(argv[1])] = '\0';
    fread(buff2, 1, 65, fd);
    fclose(fd);
    if (strcmp(buff2, argv[1]) == 0)
        execl("/bin/sh", "sh", 0);
    puts(buff2);

    return (0);
}