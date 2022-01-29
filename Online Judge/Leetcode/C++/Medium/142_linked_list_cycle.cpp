#include<bits/stdc++.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;


struct node
{
  int data;
  struct node *next;
};


int main(){
    /* Initialize nodes */
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;

    /* Allocate memory */
    one =  (struct node *)malloc(sizeof(struct node));
    two = (struct node *) malloc(sizeof(struct node));
    three = (struct node *) malloc(sizeof(struct node));
    four = (struct node *) malloc(sizeof(struct node));

    /* Assign data values */
    one->data = 3;
    two->data = 2;
    three->data = 0;
    four->data  = -4;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = two;

    /* Save address of first node in head */
    head = one;



    map <struct node *, int> mp;
    //cout<<mp[3]<<endl;

        //while(head->next != NULL){
        for(int i=0; i<7; i++){
            printf("head : %d .......\n", head->data);
            //break;
            if(mp[head] != 1){
                mp[head] = 1;
                head = head->next;
            }
            else{
                printf("hhh : %d\n", head->next->data);
                break;
            }

            //printf("head : %d .......%d\n", head->data, mp[head->data] );
        }


}



