#include<stdio.h>
#include<stdlib.h>
struct node{
int value;
struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void printlist()
{
    if(head==NULL)printf("Empty linklist\n");
    else
    {
        node *temp;
        temp=head;

        // for printing the head value
        while(temp!=tail)
        {
            printf("%d ",temp->value);// for printing the tail value
            temp= temp->next ;
        }
         printf("%d ",tail->value);
        printf("\n");
    }
}
void insert_last(int a)
{
   // printf("%d\n",tail->value);
    node *temp=(node *)malloc(sizeof(node));
    temp->value=a;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }

    else
    {
        tail->next=temp;
        tail=temp;
        tail->next=head;
    }
}
main()
{
	int choice,a;
	printf("1.insert last\n2.printlist\n3.dq\n");
	while(1)
	{
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("Enter element to nq\n");
			scanf("%d",&a);
			insert_last(a);
			break;
		case 2:
			printlist();
			break;
		case 3:
			//dq();
			break;
		}
	}
}
