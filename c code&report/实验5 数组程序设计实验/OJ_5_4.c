#include <stdio.h>
int main()
{
	int n,i,j,k,t,buyer[100],seat[20]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&buyer[i]); 
	for(i=0;i<n;i++)
	{
		k=buyer[i];
		for(j=0;j<20;j++)
		{
			if(k<=5-seat[j])
			{
				for(t=seat[j];t<seat[j]+k;t++)
                {
                    printf("%d",j+1);
					switch (t+1){
					case 1:printf("A");break;
					case 2:printf("B");break;
					case 3:printf("C");break;
					case 4:printf("D");break;
					case 5:printf("F");break;
					}
					if(t<seat[j]+k-1)printf(" ");
                }
                seat[j]=seat[j]+k;
                k=0;
                break;
			}
		}
			if(k>0)
			{
				int q=0;
					for(j=0;j<20;j++)
				{
                while(seat[j]<5&&k>0&&q<buyer[i])
                	{
                    printf("%d",j+1);
                    switch (seat[j]+1){
					case 1:printf("A");break;
					case 2:printf("B");break;
					case 3:printf("C");break;
					case 4:printf("D");break;
					case 5:printf("F");break;}
					printf(" ");
                    seat[j]++;
                    q++;
                	}
				}
				}	
		printf("\n"); 
	}
	return 0;
}

