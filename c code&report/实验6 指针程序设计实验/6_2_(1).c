#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	char a[20];
	char b[20];
	char c[20];
	char *s1=a, *s2=b, *s3=c;
	/**这样声明s1，s2，s3都是指向含有一个char类型
	数据的指针，与后面需要输入字符串不符合**/
	/*从而先声明数组，再将s1,s2,s3指向数组就可以解决问题*/
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
/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char *t, const char *s)
{
	char *t1=t;
	while(*t++ = *s++);
/**添加一个中间指针，储存传入的指针位置，
避免在执行*t++=*s++后指针t的位置发生改变，最后传出的位置错误**/
	return (t1);
}
