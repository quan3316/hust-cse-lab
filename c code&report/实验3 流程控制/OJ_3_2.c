 #include <stdio.h>
 
 int main(void)
 {
      int i,q,t,j,x,m; t=1;
      scanf ("%d",&x);
    q = 3*x-2;
     
      i=1;
     while (t<(q+3))
	  { printf (" ");
	  t++;
	  }  
	printf ("1   \n");  
	while (i<=x){
	 m=1;
	 j=1;
	 t=1;
	  while ((t-1)<q)
	  { printf (" ");
	  t++;
	  }
	  q=q-2;
	  while (j<=i) {
	  printf ("%d",m);
	if (m<10) printf ("  ");
	if ((m>=10)&&(m<100)) printf ("  ");
    else printf (" ");
        m=m*(i-j+1)/j;
       j=j+1;
       }
printf ("1   ");
i=i+1;
if (i<(x+1))
printf("\n");
	}
     return 0;
 }
