#include <math.h>       /*��ѧ�������ͷ�ļ�*/
#include <stdio.h>
int main()
{
    long x,y,i;    //iû�ж��壬�˴�Ӧ�޸� 
    for(i=1;i<100000;i++)
    {
        x=sqrt(i+100);  /*sqrt����ƽ�����ĺ���*/
        y=sqrt(i+268);
        if((x*x==i+100)&&(y*y==i+268))    //if���Ӧ��������������  ��Ӧ���ڼ���һ������ 
            printf("\n%d",i);
    }
    return 0;
}

