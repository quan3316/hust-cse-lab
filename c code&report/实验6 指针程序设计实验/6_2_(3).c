/*�밴�����Ҫ���Դ������в��������ش�������ų�����
	��1������ִ�С�����strcpyʱwatch������sΪ��ֵ������mainʱ, watch������sΪ��ֵ��*/
#include "stdio.h"
char *strcpy(char *,char *);
void main(void)
{
    char a[20],b[60]="there is a boat on the lake.";
    printf("%s\n",strcpy(a,b));

}
char *strcpy(char *s,char *t)/*����strcpy�����ͷ���main����ʱs��Ϊ������*/
{
	char *s1=s;
    while(*s++=*t++);/*���һ���м�ָ�룬���洫���ָ��λ�ã���
	����ִ��*t++=*s++��ָ��t��λ�÷����ı䣬��󴫳���λ�ô���*/

    return (s1);
}
