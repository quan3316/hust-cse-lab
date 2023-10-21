#include <stdio.h>

void swap(int a[],int n,int m1,int n1,int m2,int n2);
int main()
{
	int n,i=0;
	int m1,n1,m2,n2;
	scanf("%d",&n);
    int a[n];
	while(i<n)
	{
	 scanf("%d",&a[i]);
	 i++;
    }
	scanf("%d %d %d %d",&m1,&n1,&m2,&n2);
	swap(a,n,m1,n1,m2,n2);
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	if(i<n-1) printf(" ");/*²¹¿Õ¸ñ*/ 
    }
  return 0;
}
void swap(int a[],int n,int m1,int n1,int m2,int n2)
{
	int t,i;
	if((n1-m1)<(n2-m2))
    {
		for(i=m1;i<=n1;i++)
	    {
		
		t=a[i];
	    a[i]=a[m2+i-m1];
		a[m2+i-m1]=t;
	    }
	    for(i=n2;i>=n1+2;i--)
	    {
		t=a[i-1];
		a[i-1]=a[i];
		a[i]=t;
		}
	}
	else
	{
		for(i=m2;i<=n2;i++)
	    {
		t=a[i];
	    a[i]=a[m1+i-m2];
		a[m1+i-m2]=t;
	    }
		for(i=m1+(n2-m2)+1;i<n2;i++)
		{
		t=a[i+1];
		a[i+1]=a[i];
		a[i]=t;
		}
	}
}


