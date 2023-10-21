/*（1）	请思考程序的输出结果，然后通过上机运行来加以验证。
？%}{
253f 7b7d
（2）	将两处sizeof(short)均改为sizeof(char)结果有什么不同，为什么？
？}
253f 7b7d
改后只把a和b所指向的1个字节(低字节)输出到fp1，舍去了高字节
（3）将fprintf(fp2,"%hx %hx",a,b) 改为 fprintf(fp2,"%d %d",a,b)结果有什么不同。
？%}{
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

