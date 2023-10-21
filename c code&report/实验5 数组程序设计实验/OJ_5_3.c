#include<stdio.h>
int t = 0;
int ok(int xx, int yy, int q[]);
void queen(int x, int q[], int N);
int main()
{
    int N;
    scanf("%d", &N);
    int q[10];
    queen(0, q, N);
    if (t == 0) 
    printf("нч╫Б");
    else 
	printf("%d", t);
}
int ok(int xx, int yy, int q[])
{
    int x = 0, l = 1;
    while ( x < xx)
{ 
        if ((xx - x) == (yy - q[x]))
		l = 0;
        if (yy == q[x]) 
		l = 0;
        if ((xx - x) == (q[x] - yy)) 
		l = 0; 
		x++;
    }
    return l;
}
void queen(int x, int q[], int N)
{
    int y;
    if (x == N)
    {
        t++;
    }
    for (y = 0; y < N; y++)
    {
        if (ok(x, y, q))
        {
            q[x] = y;
            queen(x + 1, q, N);
        }
    }
}



