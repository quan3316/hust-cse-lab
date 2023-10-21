#include <stdio.h>
int main(int argc, char *argv[])
{
    for (int i = argc - 1; i > 1; i--)
    {
        char *t = argv[i - 1];
        char *k = argv[i];
        while (*t++ != '\0')
            ;
        t -= 1;
        while (*t++ = *k++)
            ;
    }
    printf("\n%s\n", argv[1]);
    return 0;
}