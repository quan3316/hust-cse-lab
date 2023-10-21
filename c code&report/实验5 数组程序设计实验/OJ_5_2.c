#include <stdio.h>
void shuru(int s[],char q[][20],int n);
void pai(int s[],char q [][20],int n);
void shuchu(int s[],char q[][20],int n);
int zhao(int s[],char q[][20],int n,int score);
int main()
{
    int s[20];
    int x,n;
    char q[20][20];
    while(scanf("%d",&x)!=EOF)
{
    switch (x)
    {
	
        case 1:
        {
            scanf("%d",&n);
            shuru(s,q,n);
            printf("%d records were input!\n",n);
            break;
        }
        case 2:
        {
            pai(s,q,n);
            printf("Reorder finished!\n");
            break;
        }
        case 3:
        {
            shuchu(s,q,n);
            break;
        }
        case 4:
        {
            int score;
            scanf("%d",&score);
            zhao(s,q,n,score);
            break;
        }
        default: break;
      }
	}
}

void shuru(int s[],char q[][20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s",q[i]);
        scanf("%d",&s[i]);
    }
}
void pai(int s[],char q[][20],int n)
{
    int i,k,j,t;
    char a;
    for(i=0;i<=n-2;i++)
    {
        k=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(s[k]<s[j])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            t=s[k];
            s[k]=s[i];
            s[i]=t;
			int l=0;
            while(l<20)
            {
                a=q[k][l];
                q[k][l]=q[i][l];
                q[i][l]=a;
				l++;
            }
        }
    }
}
void shuchu(int s[],char q[][20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<20&&q[i][j]!='\0';j++)
        {
            putchar(q[i][j]);
        }
        printf(" %d\n",s[i]);
    }
}
int zhao(int s[],char q[][20],int n,int score)
{
    int front=0,back=n-1,middle;
    while(front<=back)
    {
        middle=(front+back)/2;
        if(score>s[middle]) back=middle-1;
        else if(score<s[middle]) front=middle+1;
        else
        {
            if(score==s[middle-1])
            {
                printf("%s %d\n",q[middle-1],s[middle-1]);
                printf("%s %d\n",q[middle],s[middle]);
                return 0;
            }
            else if(score==s[middle+1])
            {
                printf("%s %d\n",q[middle],s[middle]);
                printf("%s %d\n",q[middle+1],s[middle+1]);
                return 0;
            }
            else
            {
                printf("%s %d\n",q[middle],s[middle]);
                return 0;
            }

        }
    }
    printf("not found!\n");
}

