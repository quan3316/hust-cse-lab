#include <stdio.h>
int main()
{
    char c,numchar,numline;
    numchar=0;
    numline=0;
    printf("输入若干行文本，行首输入Ctrl+z结束。\n");
    while((c=getchar()) !=EOF)   //getchar kuohao  
    {
        numchar++;
        if(c=='\n')
            numline++;
    }
    printf("字符数:%d,",numchar++);
    printf("行数:%d\n",numline);
    return 0;
}
//观察窗口看到的c的值为1，根据程序的功能，应该将键盘输入的第一个字符给c，程序执行的结果显然不符合预期，问题应该出在表达式c=getchar() !=EOF 由于运算顺序的问题导错误，应加入括号。 

