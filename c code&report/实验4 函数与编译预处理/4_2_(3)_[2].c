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
/*����ʵ��4-6��������R����Բ�����s���Լ����s����������
1�޸ĳ���ʹ�������ͨ���������У�
#include <stdio.h> 
#include <assert.h>
2����ִ�С����뺯��integerl_fractionʱ��watch������xΪ��ֵ���ڷ���mainʱ, watch������iΪ��ֵ��
(r=3)x=28.2743092 i=28
3�޸ĳ���ʹ������������sֵ���������֣�Ҫ���������룩���������������Ϣassertion failed��
�����ʮ����*/
