#include <stdio.h>


int main(void)
{
    int n, m;
 int matrix[100][100];
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &matrix[i][j]);
 
    for(int j=1; j<=m; j++) {
        for(int i=0; i<n; i++) {
            if(i != 0)
                putchar(' ');
            printf("%d", matrix[i][m-j]);
        }
        putchar('\n');
    }
 
    return 0;
}
