#include<stdio.h>
#include<stdlib.h>/**��̬���亯����ͷ�ļ�**/ 
#include<string.h>
#define N 4
/*��ָ������sָ���size���ַ���������������*/
void strsort(char *s[], int size)
{
	char * temp;/**��temp=s[j]֪tempӦ��Ϊָ��char�������ݵ�ָ��**/
	int i, j;
for(i=0; i<size-1; i++)
	for (j=0; j<size-i-1; j++)
		if (s[j+1][0]<s[j][0])/**�Ƚ�����ĸ����һ����ĸ��ǰ�ͽ���**/
		{
			temp = s[j];
 			s[j]=s[j+1];/**���佻��ָ�����**/
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
		strcpy(s[i],t);/*��t�ַ������Ƶ�s[i]��*/
	}
	strsort(s,4);/*�ɺ�������֪*/
	for (i=0; i<N; i++)	{puts(s[i]); free(s[i]);}
	return 0;
}
