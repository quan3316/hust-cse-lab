#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	char a[20];
	char b[20];
	char c[20];
	char *s1=a, *s2=b, *s3=c;
	/**��������s1��s2��s3����ָ����һ��char����
	���ݵ�ָ�룬�������Ҫ�����ַ���������**/
	/*�Ӷ����������飬�ٽ�s1,s2,s3ָ������Ϳ��Խ������*/
	printf("Input a string:\n", s2);
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n", s2);
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}
/*���ַ���s���Ƹ��ַ���t�����ҷ��ش�t���׵�ַ*/
char * strcopy(char *t, const char *s)
{
	char *t1=t;
	while(*t++ = *s++);
/**���һ���м�ָ�룬���洫���ָ��λ�ã�
������ִ��*t++=*s++��ָ��t��λ�÷����ı䣬��󴫳���λ�ô���**/
	return (t1);
}
