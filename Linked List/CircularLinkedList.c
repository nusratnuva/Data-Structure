//implementation of circular linked list
#include <stdio.h>
#include <stdlib.h>
int main(){
struct node {
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
head=0;
int input;
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
    temp->next=head;
    printf("Do you want to continue?(0/1): \n");
    scanf("%d",&input);
}

//Display
if (head == 0) {
    printf("Linked list is empty\n");
} else {
    temp = head;
    printf("Circular Linked List: ");

    while (temp->next != head)
    { 
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);

}
}