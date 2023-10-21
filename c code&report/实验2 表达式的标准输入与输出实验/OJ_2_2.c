#include <stdio.h>
 
 int main(void)
 {
    unsigned int t, m, n;
    scanf("%x", &t);
    scanf("%d", &m);
    scanf("%d", &n);
    if ((m>=0 && m<=15) && (n>=1 && n<=16-m))
    {
        int i,c,a,b;
        i = t>>(m + n);
        c=i<<16;
        i=~c;
        a=t>>m;
        b=a<<(16-n);
        t=b&i;
        printf("%x",t);
    }
    else
        printf("error");
     return 0;
 }

