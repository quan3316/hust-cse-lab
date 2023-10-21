#include<stdio.h>
int main(void)
{

	long x=0x1234abcd;
	scanf("%ld",&x);
	char*p=(char*)&x;
	char high,low,h[4],l[4];
    int k;
	for(k=0;k<4;k++)
	{
		low=(*p)&0x0f;
		if(low<10)   low|='0';
		else     low=(low-10)+'A';
		high=(*p>>4)&0x0f;
		if(high<10)     high|='0';
		else         high=(high-10)+'A';
		h[k]=high;
		l[k]=low;
		p++; 
	}
	for(k=3;k>=0;k--)
	printf("%c%c",h[k],l[k]);
	return 0;
 }

