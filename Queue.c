#include <stdio.h>
	int queue[5];
	int front=-1,rear=-1;
void enqueue(int value)
{
    if(rear==5-1)
    {
    printf("queue is full\n");
    }
    else{
    if(front==-1){
    front=0;}
    rear++;
    queue[rear]=value;
    printf("%d is added\n",value);
    }
}
void dequeue()
{
    if(front>rear||front==-1)
    {
    printf("the queue is empty\n");
    }
    else{
    printf("%d removed\n",queue[front]);
    front++;
    }
}
void peek()
{
     if(front>rear||front==-1)
    {
    printf("the queue is empty\n");
    }
    else{
    printf("result=%d\n",queue[front]);
    }
}
void display()
{
    if(front>rear||front==-1)
    {
    printf("the queue is empty\n");
    }
    else{
    printf("queue: ");
    for(int i=front;i<=rear;i++)
    {
    printf("%d ",queue[i]);
    }
    printf("\n");
    }
}
int main() {
    enqueue(10);
    display();
    dequeue();
    display();
    enqueue(20);
    enqueue(22);
    display();
    peek();
    enqueue(50);
    display();
    dequeue();
    display();
    enqueue(45);
    display();
}