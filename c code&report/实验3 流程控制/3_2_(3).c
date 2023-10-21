#include <stdio.h>
int isprime(int x);
int isc(int x,int n);
int main()
{
    int n=0,m=1;
    scanf("%d",&n);
	for(int i=0;i<n;i++)
{
    m*=10;
}
for(int j=m/10;j<m;j++)
{
    if(isc(j,n)==1)printf("%d ",j );
}
}

int isc(int x,int n)
{
for(int i=0;i<n;i++)
{
    if(isprime(x)==1)
	return 0;
    x=x/10;
}
return 1;
}



int isprime(int x) {
	int i, k, flag = 0;
    if(x==1)return 1;
		for (i = 2, k = x >> 1; i <= k; i++) {
			if (x % i == 0) {
				flag = 1;
				break;
			}
		}
	if (flag == 1)
		return 0;
	else
	return 1;
}

