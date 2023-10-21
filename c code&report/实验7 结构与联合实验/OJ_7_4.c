#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int n;
	struct node* next;
}man;

man* creat(int n)
{
	man* head=(man*)malloc(sizeof(man));
	head->n=1;
	man *p=head;
	int i;
	for(i=2;i<=n;i++)
	{
		man* q=(man*)malloc(sizeof(man));
		q->n=i;
		p->next=q;
		p=p->next; 
	}
	p->next=head;
	return head;
}
void find(man* head,int a,int b)
{
	int i;
	man *p=head,*q;
	while(p->n!=a)
	{
		q=p;
		p=p->next;
	}
	while(p->next!=p)
	{
		for(i=1;i<b;i++)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		printf(" %d",p->n);
		free(p);
		p=q->next;
	} 
	printf("\n%d",p->n);
	free(p);
} 
int main()
{
	int n,m=1,b;
	scanf("%d",&n);
	man* head=creat(n);
	scanf("%d",&b);
	find(head,m,b); 
	return 0;
}

