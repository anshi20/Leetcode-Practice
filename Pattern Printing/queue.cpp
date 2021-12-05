#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int a)
{
	if(rear==-1)
	{
		front = front+1;
		rear = rear+1;
		queue[rear]=a;
		printf("\nElement insered!\n");
	}
	else if(rear==MAX)
	{
		printf("\nNO MORE SPACE! QUEUE IS FULL !\n");
		return;
	}
	else
	{
		rear = rear+1;
	    queue[rear]=a;
	    printf("\nElement inserted!\n");
	}
}
void dequeue()
{
	if(front==-1){
		printf("QUEUE IS EMPTY!");
		return;
	}
	int temp;
	if(front==rear)
	  {
	  	temp=queue[front];
	  	front=-1;
	  	rear=-1;
	  	printf("\nDequeued element %d\n",temp);
	  }
	else
	 {
	 	temp=queue[front];
	 	front=front+1;
	 	printf("\nDequeued element %d\n",temp);
	 }
}
void display()
{
	if(rear==-1)
    {
    	printf("\nQueue is empty!\n");
    	return;
	}
	else {
        printf("\nDisplaying elements .....\n");
		for(int i=front; i<=rear ; i++)	{
        	printf("%d\t",queue[i]);
		}
    printf("\n");
	}
}

int main()
{
	int choice,n;
	while(1)
	{
		printf("\t\t\t\t\tMENU\t\t\t\t");
		printf("\n1.Enqueue\t\t\t\t\t2.Dequeue\n");
		printf("\n3.Display\t\t\t\t\t4.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : printf("\nEnter element to be inserted : ");
			         scanf("%d",&n);
			         enqueue(n);
			         break;
			case 2 : dequeue();
			         break;
			case 3 : display();
			         break;
			case 4 : printf("\nExiting...\n");
			         exit(0);
			         break;
			default: printf("\nInvalid Choice!\n");
			         break;
		}
	}
	
	return 0;
}
