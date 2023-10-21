#include <stdio.h> 
/*#define max(a,b,c) a>b ?( (a>c)?a:c): ((b>c)?b:c)*/
float sum(float x, float y);
int max(int x, int y, int z); 
int main(void)
{
	int a, b, c;
  	float d, e;
  	printf("Input three integers:");
  	scanf("%d %d %d",&a,&b,&c);
  	printf("\nThe maximum of them is %d\n",max(a,b,c));
  	printf("Input two floating point numbers:");
	scanf("%f %f",&d,&e);
	printf("\nThe sum of them is  %f\n",sum(d,e));
	return 0;
}
float sum(float x, float y)
{
	return x+y;
}

int max(int x, int y, int z)					
{
	int m=z;
	if (x>y){	if(x>z) m=x;
	}
	else {if(y>z) m=y;
	}
    return m;
}

