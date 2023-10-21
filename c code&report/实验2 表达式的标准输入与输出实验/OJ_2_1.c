#include<stdio.h>
main()
{
char a;
while((a=getchar())!='\n')
{
if(a>='A'&&a<='Z')
a=a+32;
printf("%c",a);
}
}

