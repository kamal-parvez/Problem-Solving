#include<stdio.h>
#include<stdlib.h>
struct doubly{
struct node{
int value;
struct node *next;
struct node *prev;
}*rear,*font,*temp;
void creat(int a)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->value=a;
	temp->prev=NULL;
	temp->next=NULL;

}

void nq(int q)
{
	struct node *p;
	if(rear==NULL && font==NULL)
	{
		creat(q);
		rear=temp;
		font=temp;
	}
	else
	{
		creat(q);
		p=rear;
		p->next=temp;
		rear=p->next;
    }
}
void dq()
{
	//struct node *p;
	if(font==NULL)
	{
		printf("Queue is empty \n");
	}
	else if(font==rear)
    {
        font=NULL;
        rear=NULL;
    }
	else{
		//creat();
		temp=font;
		font=font->next;
		font->prev=NULL;
		printf("%d is poped\n",temp->value);
		free(temp);
		//font=temp->next;

	}
}

void printlist()
{
	if(rear==NULL && font==NULL)printf("Queue is empty\n");
	else
		{
	struct node *temp2;
	temp2=font;
	printf("The list is:  \n");
	while(temp2!=rear)
	{
		printf("%d\n",temp2->value);
		temp2=temp2->next;
	}
	printf("%d\n",rear->value);
	//printf("\n");
	}
}
}s;
main()
{
	int choice,a;
	printf("1.press to nq the queue\n2.press to dq the queue\n3.press to print the queue\n");
	while(1)
	{
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
		printf("Enter any element to nq: ");
				scanf("%d",&a);
				s.nq(a);
				break;
		case 2:
			s.dq();
			break;
		case 3:
			s.printlist();
			break;
		}
	}

}

