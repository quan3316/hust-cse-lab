#include <stdio.h>
int main( )
{ 
	int i, x, k, flag = 0;
	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while (scanf("%d", &x) !=EOF) {
	for(i=2,k=x>>1;i<=k;i++)
		if (!(x%i))/*非的优先级高于模运算，需要加括号改变运算优先级*/
	 	{
			flag = 1;
		
		}
	if(flag==1)/*判断条件是==而非=*/ printf("%d是合数", x);
	else printf("%d不是合数", x);
	flag=0;/*调试过程中发现测试一个合数后，之后无论什么数均显示为合数,故加此初始化flag值*/
}
return 0;
}
