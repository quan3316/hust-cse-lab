#include <stdio.h>
int main( )
{ 
	int i, x, k, flag = 0;
	printf("�������жϺ��������������1����������Ctrl+Z����\n");
	while (scanf("%d", &x) !=EOF) {
	for(i=2,k=x>>1;i<=k;i++)
		if (!(x%i))/*�ǵ����ȼ�����ģ���㣬��Ҫ�����Ÿı��������ȼ�*/
	 	{
			flag = 1;
		
		}
	if(flag==1)/*�ж�������==����=*/ printf("%d�Ǻ���", x);
	else printf("%d���Ǻ���", x);
	flag=0;/*���Թ����з��ֲ���һ��������֮������ʲô������ʾΪ����,�ʼӴ˳�ʼ��flagֵ*/
}
return 0;
}
