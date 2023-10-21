#include <stdio.h> 
#include <assert.h>
#define  R
int integer_fraction(float x);
int main(void)
{
	float  r, s;
	int s_integer=0;
    printf ("Input a number: ");
    scanf("%f",&r);
    #ifdef  R
       s=3.14159*r*r;
       printf("Area of round is: %f\n",s);
       s_integer=integer_fraction(s);
       if(!((s-s_integer)<0.5)) s_integer++; 
       assert((s-s_integer)<0.5);
       printf("The integer fraction of area is %d\n", s_integer);
    #endif
    return 0;
}

int integer_fraction(float x)
{
  int i=x;
  return i;
}
/*下面实验4-6程序利用R计算圆的面积s，以及面积s的整数部分
1修改程序，使程序编译通过且能运行；
#include <stdio.h> 
#include <assert.h>
2单步执行。进入函数integerl_fraction时，watch窗口中x为何值？在返回main时, watch窗口中i为何值？
(r=3)x=28.2743092 i=28
3修改程序，使程序能输出面积s值的整数部分（要求四舍五入），不会输出错误信息assertion failed。
加入第十五行*/
