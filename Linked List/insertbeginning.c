// Insert data at the beginning of the array

#include <stdio.h>
#include <stdlib.h>
int main(){
    struct node {
        int data;
        struct node *next;
    };
struct node *head, *newnode, *temp;
head=0;
int input,value;
printf("Do you want create a linked list? \nIf yes then type 1: ");
scanf("%d",&input);
while(input){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a data: \n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue?(0/1): \n");
    scanf("%d",&input);
}
newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data you want to insert at the beginning: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
temp = head;  
while (temp !=0) {
    printf("%d ", temp->data);
    temp = temp->next;
}
printf("\n");
return 0;
}
