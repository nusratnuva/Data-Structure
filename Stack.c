#include <stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
    if(top==size-1)
    {
    printf("overflow\n");
    }
    else{
    printf("%d is added\n",value);
    top++;
    stack[top]=value;
    }
}
void pop()
{
    int value;
    if(top==-1)
    {
    printf("underflow\n");
    }
    else{
    value=stack[top];
    top--;
    printf("%d is removed\n",value);
    }
}
void peek()
{
    if(top==-1)
    {
    printf("underflow\n");
    }
    else{
    printf("result=%d\n",stack[top]);
    }
}
void show()
{
    if(top==-1)
    {
    printf("underflow\n");
    }
    else{
    printf("stack: ");
    for(int i=top;i>=0;i--)
    {
      printf("%d ",stack[i]);
    }
    printf("\n");
    }
}
int main() {
   push(10);
   show();
   pop();
   show();
   push(15);
   push(20);
   show();
   peek();
   push(25);
   show();
}