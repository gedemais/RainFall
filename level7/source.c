#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char    c[80];

void    m(void)
{
    printf("%s - %d", c, time(0));
    return;
}

int     main(int argc, char**argv)
{
    char    *ptr;
    char    *ptr2;

    ptr = malloc(8);
    *ptr = 1;
    *(ptr + 4) = malloc(8);
    ptr2 = malloc(8);
    *ptr2= 2;
    *(ptr2 + 4) = malloc(8);
    strcpy(*(ptr + 4), argv[1]);
    strcpy(*(ptr2 + 4), argv[2]);
    fgets(c, 68, fopen(c, "r/home/user/level8/.pass"));
    puts("~~");
    return (0);
}