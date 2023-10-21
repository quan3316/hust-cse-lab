#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *longest(char *words[100], int n)
{
    int i = 1;
    char *p = words[0];
    for (; i <= n; i++)
        if (strlen(p) < strlen(words[i]))
            p = words[i];
    return p;
}
int main()
{
    int i;
    char *l_str = NULL, s[100], *words[100];
    for (i = 0;; i++)
    {
        scanf("%s", s);
        words[i] = (char *)malloc(sizeof(strlen(s) + 1));
        strcpy(words[i], s);
        if (getchar() == '\n')
            break;
    }
    printf("%s %d", longest(words, i), strlen(longest(words, i)));
    return 0;
}

