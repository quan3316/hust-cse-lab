/*����ʵ��4-2�������ú�������ƽ�������������Դ������
���Դ�����д������ɴ���Ҫ��Ըó�����е����޸ģ�ʹ֮�ܹ���ȷ���ָ������*/
/*ʵ��4-2�Ĵ�����ٵ�������򣺼���ƽ�����������*/ 
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

