#include<stdio.h>
#define PI 3.14159
int main( void )
{
   int f ;
   short p, k ;
   double c, r, s ;

/* ����1 */
   printf("Input Fahrenheit: " ) ;
   scanf("%d", &f ) ;      /*ȡ��ַ*/ 
   c = 5.0/9 * (f-32) ;    /* ����ת��*/ 
   printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;

/* ����2 */
printf("input the radius r:");
scanf("%lf", &r);   /*double¼��*/ 
s = PI * r * r;
printf("\nThe acreage is %.2f\n\n",s);

/* ����3 */
int unsigned short newint;  /*����*/ 
k = 0xa1b2, p = 0x8432;
newint = p&0xff00|(k>>8)&0x00ff; /*ȡ���ֽ�*/ 
printf("new int = %#x\n\n",newint);
return 0;
}

