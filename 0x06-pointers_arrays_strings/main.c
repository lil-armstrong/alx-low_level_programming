#include <stdio.h>
#include "main.h"
#include <string.h>

int main()
{
    char s1[] = "hell";
    char s2[] = "hel";

    printf("%d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s2, s1));
    printf("%d\n", strcmp(s1, s1));
    return (0);
}
