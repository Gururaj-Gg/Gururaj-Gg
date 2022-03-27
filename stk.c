#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size];
void push(int[],int);
void display(int[]);
void pop(int[]);
void main()
{
int item,choice;
while(1)
{
printf("\nenter stack operation:");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the item:");
scanf("%d",&item);
push(stack,item);
break;
case 2:pop(stack);
break;
case 3:display(stack);
break;
case 4:exit(0);
break;
default:printf("enter valid number");
break;
}
}
}
void push(int stack[],int item)
{
if(top==size-1)
{
printf("stack full");
return;
}
top++;
stack[top]=item;
}
void pop(int stack[])
{
int ditem;
if(top==-1)
{
printf("stack is empty");
}
ditem=stack[top];
top--;
printf("item is deleted %d",ditem);
}
void display(int stack[])
{
int i;
if(top==-1)
{
printf("stack is empty:\n");
return;
}
printf("stack elements are");
for(i=top;i>=0;i--)
{
printf(" %d",stack[i]);
}
}
