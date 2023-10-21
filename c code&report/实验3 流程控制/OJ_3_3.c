 #include <stdio.h>
 
 int main(void)
 {
     int a=100,b;
     while (a<1000)
     {
    b=a*a;
    if (((b-a)%1000)==0)
    printf ("%d\n",a);
    a++;
    }
     return 0;
 }

