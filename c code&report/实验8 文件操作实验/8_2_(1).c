/*��1��	��˼���������������Ȼ��ͨ���ϻ�������������֤��
��%}{
253f 7b7d
��2��	������sizeof(short)����Ϊsizeof(char)�����ʲô��ͬ��Ϊʲô��
��}
253f 7b7d
�ĺ�ֻ��a��b��ָ���1���ֽ�(���ֽ�)�����fp1����ȥ�˸��ֽ�
��3����fprintf(fp2,"%hx %hx",a,b) ��Ϊ fprintf(fp2,"%d %d",a,b)�����ʲô��ͬ��
��%}{
9535  31613
*/


#include <stdio.h>
void main(void)
{
	short a=0x253f,b=0x7b7d;
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("d:\\abc1.bin","wb+");
    fp2=fopen("d:\\abc2.txt","w+");
	fwrite(&a,sizeof(short),1,fp1);
	fwrite(&b,sizeof(short),1,fp1);   
	fprintf(fp2,"%d %d",a,b) ;

    rewind(fp1); rewind(fp2);
	while((ch = fgetc(fp1)) != EOF) 
		putchar(ch);
	putchar('\n');
	
	while((ch = fgetc(fp2)) != EOF) 
		putchar(ch);
	putchar('\n');

	fclose(fp1);
	fclose(fp2);
}

