#include <stdio.h>
#include <malloc.h>
#include <string.h>
int task0();int task1();int task2();int task3();int task4();int task5();int task6();int task7();

void execute(int (*b[])(viod),int n){
	for(int i=0;i<n;i++)
	b[i](); 
    return ;
}
void scheduler(){
	int (*a[8])(void);
	int (*b[8])(void);
	a[0]=task0;a[1]=task1;a[2]=task2;a[3]=task3;
	a[4]=task4;a[5]=task5;a[6]=task6;a[7]=task7;
	char str[20];
	gets(str);
	for(int i=0;i<strlen(str);i++)
	b[i]=a[str[i]-'0'];
	execute(b,strlen(str));
    return ;
}
int main(){
	scheduler();
	return 0;
}
int task0()
{
    printf("task0 is called!\n");return 0;
}
int task1()
{
    printf("task1 is called!\n");return 0;
}
int task2()
{
    printf("task2 is called!\n");return 0;
}
int task3()
{
    printf("task3 is called!\n");return 0;
}
int task4()
{
    printf("task4 is called!\n");return 0;
}
int task5()
{
    printf("task5 is called!\n");return 0;
}
int task6()
{
    printf("task6 is called!\n");return 0;
}
int task7()
{
    printf("task7 is called!\n");return 0;
}

