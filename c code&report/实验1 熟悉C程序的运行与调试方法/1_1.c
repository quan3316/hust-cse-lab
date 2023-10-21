#include <math.h>       /*数学函数库的头文件*/
#include <stdio.h>
int main()
{
    long x,y,i;    //i没有定义，此处应修改 
    for(i=1;i<100000;i++)
    {
        x=sqrt(i+100);  /*sqrt是求平方根的函数*/
        y=sqrt(i+268);
        if((x*x==i+100)&&(y*y==i+268))    //if语句应该用括号括起来  ，应该在加入一个括号 
            printf("\n%d",i);
    }
    return 0;
}

