#include <stdio.h>
int main()
{
    char c,numchar,numline;
    numchar=0;
    numline=0;
    printf("�����������ı�����������Ctrl+z������\n");
    while((c=getchar()) !=EOF)   //getchar kuohao  
    {
        numchar++;
        if(c=='\n')
            numline++;
    }
    printf("�ַ���:%d,",numchar++);
    printf("����:%d\n",numline);
    return 0;
}
//�۲촰�ڿ�����c��ֵΪ1�����ݳ���Ĺ��ܣ�Ӧ�ý���������ĵ�һ���ַ���c������ִ�еĽ����Ȼ������Ԥ�ڣ�����Ӧ�ó��ڱ��ʽc=getchar() !=EOF ��������˳������⵼����Ӧ�������š� 

