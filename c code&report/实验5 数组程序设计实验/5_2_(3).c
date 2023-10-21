#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
  int a[M],b[M];
  int i,j,k,t=M-1;
  for(i=0;i<M;i++)
    a[i]=i+1;
  for(i=M,j=0;i>1;i--)  
 {
    for(k=1;k<=N;k++) 
  {
    if(a[j]==0) 
	  k--;
    if(++j>9) j=0; 
  }
  if(j) b[M-i]=a[j-1];
  else 
   {
     b[M-i]=a[t];
     t--;
   }
  k=--j;
  a[k]=0;
 }
  for(i=0;i<M-1;i++) printf("%6d",b[i]);
  for(i=0;i<M-1;i++) 
 {
 if(a[i]) 
 printf("%6d\n",a[i]);
  }
 return 0;
}

