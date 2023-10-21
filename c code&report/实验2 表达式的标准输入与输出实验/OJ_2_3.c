#include <stdio.h>
 
 int main(void)
 {  
     
     int unsigned long x;
	 while(scanf("%d",&x)!=EOF)	
	 {
	  unsigned long q,w,e,r;    
     q=(x&0xff000000)>>24;
	 w=(x&0x00ff0000)>>16;
	 e=(x&0x0000ff00)>>8;
     r=(x&0x000000ff);
	 printf("%d.%d.%d.%d\n",q,w,e,r);
     }
     return 0;
 }

