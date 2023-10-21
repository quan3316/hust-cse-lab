/*请按下面的要求对源程序进行操作，并回答问题和排除错误。
	（1）单步执行。进入strcpy时watch窗口中s为何值？返回main时, watch窗口中s为何值？*/
#include "stdio.h"
char *strcpy(char *,char *);
void main(void)
{
    char a[20],b[60]="there is a boat on the lake.";
    printf("%s\n",strcpy(a,b));

}
char *strcpy(char *s,char *t)/*进入strcpy函数和返回main函数时s均为空数组*/
{
	char *s1=s;
    while(*s++=*t++);/*添加一个中间指针，储存传入的指针位置，避
	免在执行*t++=*s++后指针t的位置发生改变，最后传出的位置错误*/

    return (s1);
}
