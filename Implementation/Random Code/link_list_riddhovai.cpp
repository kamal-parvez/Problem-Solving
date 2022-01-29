#include <stdio.h>
#include <stdlib.h>
struct node{
    int val;
    node* next;
};

node* head; //Marks the beginning of the linked list

struct node* create_node(int v) {
    node* temp=(node*) malloc(sizeof(node));
    temp->val=v;
    temp->next=NULL;
    return temp;   //This function basically creates a new node with the value v
};

void create_head(int v){
    head=create_node(v);  //Make a new node. Assign it to the head
};

void insert_at_end(int v){
    if(head==NULL){
        create_head(v); //Since the head's not created yet, let's make one
        return;
    }
    node* temp=head; //Start from the head
    while(temp->next!=NULL) temp=temp->next; //Iterate up to the end of the linked list
    node* new_node=create_node(v); // Create a new node
    temp->next=new_node; //Add it to the end of the list
}

void delete_node(int kon_value){
    if(head==NULL){
        printf("The list's empty!\n");
        return;
    }
    if(head->val==kon_value){ //Special Case: Deleting the head.
        node* save=head;  //Store the current head
        head=head->next;  //Make the 2nd node the new head
        free(save);       //Remove the previous head
    }
    else{
        node* temp=head;
        while(temp->next!=NULL && temp->next->val!=kon_value){
            temp=temp->next;
        }
        if(temp->next==NULL){
            printf("Error 404: Value not found\n");  //We've reached the end of the list, couldn't find the value yet
            return;
        }
        node* save=temp->next;
        temp->next=temp->next->next;
        free(save);
    }
}

void print_list(){
    if(head==NULL){
        printf("Empty\n");
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        printf("%d ", temp->val);
        temp=temp->next;
    }
    printf("\n");
}


/**
    You don't need to read anything after this part
    The rest of this is written just to provide a useful
    interface for you to run this program.
**/

/***********************************************************************************************/

void option_1(){
    printf("Enter the value of the first node:\n");
    int v;
    scanf("%d", &v);
    create_head(v);
    printf("Head created\n");
}

void option_2(){
    int v;
    printf("Enter the value you want to insert\n");
    scanf("%d", &v);
    insert_at_end(v);
    printf("Node inserted\n");
}

void option_3(){
    printf("Enter the value of the node you want to delete\n");
    int v;
    scanf("%d", &v);
    delete_node(v);
    printf("Done\n");
}

void option_4(){
    printf("The linked list is: ");
    print_list();
}

void do_work(int choice){
    if(choice==1) option_1();
    else if(choice==2) option_2();
    else if(choice==3) option_3();
    else if(choice==4) option_4();
    else printf("Invalid option -_-\n");
}

void menu(){
    printf("Press 1, To create a new linked list\n");
    printf("Press 2, To insert a node at the end\n");
    printf("Press 3, To delete the first node with a certain value\n");
    printf("Press 4, To print the linked list\n");
    printf("Press 0, To close this application\n");
}

int main()
{
    while(1){
        menu();
        printf("Enter your choice\n");
        int choice;
        scanf("%d", &choice);
        if(choice==0) return 0;
        else{
            system("cls");
            do_work(choice);
        }
    }
}
