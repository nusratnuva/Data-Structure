#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int input;

    printf("Do you want to create a doubly linked list? \nIf yes then type 1: ");
    scanf("%d", &input);

    while (input) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
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
    if (head==0) {
        printf("Doubly Linked List is empty\n");
    } else {
        temp = head;
        printf("Doubly Linked List (Forward): ");
        while (temp !=0) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }

    return 0;
}
