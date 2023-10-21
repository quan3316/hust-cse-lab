#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 1000
#define SSIZE 10
#define NDEBUG
int main(void){
#ifdef NDEBUG
    char alter[SSIZE],target[SSIZE];
    scanf("%s%s",target,alter);
    FILE*fp=fopen("EXP/exp801/source.txt","r");
    char big[SIZE]={'\0'};
    char towrite[SIZE]={'\0'};
    fgets(big,SIZE,fp);
    char *current=big,*find=NULL;
    char *currentw=towrite;
    int step=0;
    int count=0;
    while((find=strstr(current,target))!=NULL) {
        char *temp = find;
        int i = 0;
        while (*temp != EOF && i <= strlen(target) + 1) {
            temp++;
            i++;
        }
        if ((isspace(*(find + strlen(target))) || ispunct(*(find + strlen(target)))) || i < strlen(target) + 1) {
            count++;
            step = find - current;
            strncat(currentw, current, step);
            currentw += step;
            current = find;
            current += strlen(target);
            strcat(currentw, alter);
            currentw += strlen(alter);
        }
        else{
            find+=strlen(target);
            step=find-current;
            strncat(currentw,current,step);
            current=find;
        }
    }
    strcat(currentw, current);
    fclose(fp);
    fp = fopen("EXP/exp801/source.txt", "w+");
    fputs(towrite, fp);
    fclose(fp);
    printf("%d\n", count);
    printf("%s", towrite);
#endif
#ifdef NDEBUG
    char back[SIZE]={"May you have enough happiness to make you sweet, enough trials to make you strong, enough sorrow to keep you human, enough hope to make you happy? Always put yourself in others' shoes. If you feel that it hurts you, it probably hurts the other person, too."};
    fp=fopen("EXP/exp801/source.txt","w+");
    fputs(back,fp);
    fclose(fp);
#endif
    return 0;

}

#ifdef a
&&(isspace(*(find-1))||ispunct(*(find-1)))&&(isspace(*(find+1))||ispunct(*(find+1)))
#endif

