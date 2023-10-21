#include<stdio.h>
#include<stdlib.h>/**动态分配函数的头文件**/ 
#include<string.h>
#define N 4
/*对指针数组s指向的size个字符串进行升序排序*/
void strsort(char *s[], int size)
{
	char * temp;/**由temp=s[j]知temp应该为指向char类型数据的指针**/
	int i, j;
for(i=0; i<size-1; i++)
	for (j=0; j<size-i-1; j++)
		if (s[j+1][0]<s[j][0])/**比较首字母，后一个字母在前就交换**/
		{
			temp = s[j];
 			s[j]=s[j+1];/**补充交换指针语句**/
			s[j+1] = temp;
		}
}

int main()
{
	int i;
	char *s[N], t[50];
	for (i=0; i<N; i++)
	{
		gets(t);
		s[i] = (char *)malloc(strlen(t)+1);
		strcpy(s[i],t);/*将t字符串复制到s[i]中*/
	}
	strsort(s,4);/*由函数定义知*/
	for (i=0; i<N; i++)	{puts(s[i]); free(s[i]);}
	return 0;
}
