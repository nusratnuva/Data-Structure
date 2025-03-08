//insert at any position
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
    int data;
    struct node *next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int input;
    printf("Do you want to create a linked list?\nIf yes type 1: \n");
    scanf("%d",&input);
    while(input){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
    head=temp=newnode;
    }
    else{
    temp->next=newnode;
    temp=newnode;
    }
    printf("do you want to continue?(0/1): ");
    scanf("%d",&input);
    }
   
    int pos;
    printf("enter position: ");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert at position %d: ",pos);
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else {
        temp=head;
        for(int i=1;i<pos-1&&temp!=0;i++)
        {
            temp=temp->next;
        }
        if(temp==0)
        {
            printf("invalid position\n");
            free(newnode);
        }
        else{
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
   
   
    temp=head;
    printf("linked list: ");
    while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
    }
}