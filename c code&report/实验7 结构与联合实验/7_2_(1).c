/*1.100
2.B
3.x
4.x
5.V
6.V
*/
#include<stdio.h>
int main(void)
{
  char *m;char *n;char *e;char *f;
  char u[]="UVWXYZ";
  char v[]="xyz";
  m=u,n=v;
struct  T 
 {
     int x;
     char c;
     char *t;
 }
  a[]={{11,'A',u},{100,'B',v}},*p=a;
  e=a[0].t;f=a[1].t;
  printf("1.%d\n",(++p)->x);
  p=a;*u=*m;*v=*n;a[0].t=e;a[1].t=f;
  printf("2.%c\n",(p++,p->c));
  p=a;*u=*m;*v=*n;a[0].t=e;a[1].t=f;
  printf("3.%c\n",(*p++->t,*p->t));
  p=a;*u=*m;*v=*n;a[0].t=e;a[1].t=f;
  printf("4.%c\n",(*(++p)->t));
  p=a;*u=*m;*v=*n;a[0].t=e;a[1].t=f;
  printf("5.%c\n",(*++p->t));
  p=a;*u=*m;*v=*n;a[0].t=e;a[1].t=f;
  printf("6.%c\n",(++*p->t));
  return 0;
}

