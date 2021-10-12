#include<stdio.h>
struct Queue
{
 int arr[5];
int	front;
int rear;

};
void insertq(struct Queue*p,int x);
int removeq(struct Queue*p);
int main()
{
	struct Queue q;
	int i,x;
	q.front=0;
	q.rear=-1;
	

   for(i=0;i<6;i++)
{
	printf("Enter element");
	scanf("%d",&x);
	insertq(&q,x);
	
}
for(i=1;i<6;i++)
{
	x=removeq(&q);
	if(x!=-1)
	{
		printf("Removed element is %d",x);
		
	}
}
}
void insertq(struct Queue *p,int x)
{
	if(p->rear==4)
	{
		printf("Queue overflow ");
		return;
	}
	p->rear=p->rear+1;
	p->arr[p->rear]=x;
}
int removeq(struct Queue*p)
{ 
int x;
	if(p->front>p->rear)
	{
		printf("Queue is empty");
		return -1;
	}
	x=p->arr[p->front];
	p->front=p->front+1;
	return x;
}
