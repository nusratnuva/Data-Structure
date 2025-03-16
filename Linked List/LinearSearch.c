#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
int main(){
struct node *head, *newnode, *temp;
head=0;
int input, value, pos=1;
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
temp=head;
//Display
printf("Linked List: ");
while(temp!=0){
    printf("%d ", temp->data);
    temp=temp->next;
}
printf("\nEnter the element to search: ");
    scanf("%d", &value);

    temp = head;
    while (temp != 0) {
        if (temp->data == value) {
            printf("found at position %d\n", pos);
            break;
        }
        temp = temp->next;
        pos++;
    }
    if(temp==0){
        printf("not found in the list\n");
    }

return 0;
}