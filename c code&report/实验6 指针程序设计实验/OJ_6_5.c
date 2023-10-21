#include<stdio.h>
void print1(int begin,int **num);
void print2(int begin,int **num);
int n,m;
int main(void){
	int sum,begin;
	int i,j; 
	scanf("%d %d",&n,&m);
	sum=n-1+m-1+1;
	int num[n][m];
 
	for(i=0;i<n;i++)
		{for(j=0;j<m;j++){
			scanf("%d",&num[i][j]);
		}}
	for(begin=1;begin<=sum;begin++)
	     {
			if(begin%2) {print2(begin,(int**)num);}
	         else if(!(begin%2)) print1(begin,(int**)num);
}
	return 0;
}
void print1(int begin,int **num)
{
	int i,j;
	for(i=0;i<n;i++)
	  for(j=0;j<m;j++)
	     if(i+j+1==begin) {
		 printf("%d ",*((int*)num+m*i+j));}
	
	
}
void print2(int begin,int **num)
{
	int i,j;
	for(j=0;j<m;j++)
	  for(i=0;i<n;i++)
	     if(i+j+1==begin) {
		 printf("%d ",*((int*)num+m*i+j));
}
	
}

