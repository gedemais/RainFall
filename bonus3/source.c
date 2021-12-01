#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char**argv)
{
    int     fd;
    int     nb;
    char    buffer[156];

    fd = fopen("/home/usr/end/.pass", "r");
    memset(buffer, 0, 33);
    if (fd == 0 || argc < 2)
        return (-1);
    fread(buffer, 1, 66, fd);
    buffer[64] = '\0';
    nb = atoi(argv[1]);
    buffer[nb] = '\0';
    fread(&buffer + 66, 1, 65, fd);
    fclose(fd);
    if (strcmp(buffer, argv[1]) == 0)
        execl("/bin/sh", "sh", 0);
    puts(buffer + 66);

    return (0);
}