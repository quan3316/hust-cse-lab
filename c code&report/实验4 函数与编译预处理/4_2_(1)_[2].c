/*下面实验4-2程序是用宏来计算平方差、交换两数的源程序。在
这个源程序中存在若干错误，要求对该程序进行调试修改，使之能够正确完成指定任务。*/
/*实验4-2改错与跟踪调试题程序：计算平方差、将换两数*/ 
#include <stdio.h>
#define SUM ((a)+(b))
#define DIF ((a)-(b))
#define SWAP(a,b,i)  i=a,a=b,b=i
int main() 
{
    int a,b,i;
    printf("Input two integers a, b:");
    scanf("%d%d", &a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM, SUM*DIF);
    SWAP(a,b,i);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}

