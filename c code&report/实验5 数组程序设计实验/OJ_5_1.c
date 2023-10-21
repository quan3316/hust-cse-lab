#include <stdio.h>
int main()
{
 int x,t;
 int a[32];
 scanf("%d",&x);
 for(int i=0;i<32;i++)
 {
  t=(x<<i)>>31;
  a[i]=0-t;
 }
 for(int i=0;i<32;i++)
 {
  printf("%d",a[i]);
 }
 return 0;
}


