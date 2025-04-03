#include <stdio.h>
#define size 5
	int queue[size];
	int front=-1,rear=-1;
void enqueue(int value)
{
    if((rear+1)%size==front)
    {
    printf("queue is full\n");
    }
    else{
    if(front==-1){
    front=0;}
    rear=(rear+1)%size;
    queue[rear]=value;
    printf("%d is added\n",value);
    }
}
void dequeue()
{
    if(front==-1)
    {
    printf("the queue is empty\n");
    }
    else{
    printf("%d removed\n",queue[front]);
    if(front==rear)
    {
    front=rear=-1;
    }
    else{
    front=(front+1)%size;
    }
    }
}
void display()
{
    if(front==-1)
    {
    printf("the queue is empty\n");
    }
    else{
    printf("queue: ");
    int i=front;
    while(i!=rear){
    printf("%d ",queue[i]);
    i=(i+1)%size;
    }
    printf("%d\n",queue[rear]);
    }
}
int main() {
    enqueue(10);;
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();  
    dequeue();
    dequeue();
    display();   
    enqueue(60);
    enqueue(70);
    display();
}