#include <stdio.h>
#include <stdlib.h>

char    c[68];

int     m()
{
    return (printf("%s - %d", c, time(0)));
}

int     main(int argc, char**argv)
{
    char    *ptr;
    char    *ptr2;
    char    *ptr3;
    char    *ptr4;

    ptr = malloc(8);
    *ptr = 1;
    ptr2 = malloc(8);
    *(ptr + 4) = ptr2;
    ptr3 = malloc(8);
    *ptr3 = 2;
    ptr4 = malloc(8);
    *(ptr3 + 4) = ptr4;
    strcpy(*ptr2, argv[1]);
    strcpy(*ptr4, argv[2]);
    fgets(c, 68, fopen(c, "r/home/user/level8/.pass"));
    puts("~~");
    return (0);
}