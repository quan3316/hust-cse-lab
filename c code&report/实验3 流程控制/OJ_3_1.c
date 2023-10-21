#include<stdio.h>
int main(void)
{
    char c;
    while((c=getchar())!=EOF){
        if(c==' '){ 
            putchar(c);
            while((c=getchar())==' '){
                ;
            }
            if(c!=EOF)
                putchar(c);
            else
                break;
        }
        else
            putchar(c);
    }
    return 0;
}

