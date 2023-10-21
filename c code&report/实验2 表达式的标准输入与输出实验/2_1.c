#include<stdio.h>
#define PI 3.14159
int main( void )
{
   int f ;
   short p, k ;
   double c, r, s ;

/* 任务1 */
   printf("Input Fahrenheit: " ) ;
   scanf("%d", &f ) ;      /*取地址*/ 
   c = 5.0/9 * (f-32) ;    /* 数据转换*/ 
   printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;

/* 任务2 */
printf("input the radius r:");
scanf("%lf", &r);   /*double录入*/ 
s = PI * r * r;
printf("\nThe acreage is %.2f\n\n",s);

/* 任务3 */
int unsigned short newint;  /*定义*/ 
k = 0xa1b2, p = 0x8432;
newint = p&0xff00|(k>>8)&0x00ff; /*取低字节*/ 
printf("new int = %#x\n\n",newint);
return 0;
}

