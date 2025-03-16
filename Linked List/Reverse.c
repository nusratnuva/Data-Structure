#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *head = 0, *newnode, *temp;
    int input;

    printf("Do you want to create a doubly linked list? \nIf yes then type 1: ");
    scanf("%d", &input);

    while (input) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next =0;

        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        printf("Do you want to continue? (0/1): ");
        scanf("%d", &input);
    }

    // Display
     temp = head;
     printf("Doubly Linked List: ");
     while (temp !=0) {
            printf("%d ", temp->data);
            if (temp->next == 0) {  
                break;
            }
            temp = temp->next;
        }
        printf("\n");
    
    printf("Doubly Linked List (Reversed): ");
    while (temp !=0) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    return 0;
}