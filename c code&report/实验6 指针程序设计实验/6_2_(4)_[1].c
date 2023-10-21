#include<stdio.h>
int main(int argc,char*argv[]) 
{
	int n=0;
	while(n<argc){
		printf("%s",argv[n]);
		(n<argc-1)?printf(" "):printf("\n");
		n++;
	}
	return 0;
}
