#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int top=-1,stack[MAXSIZE],i,ele;
void push();
int pop();
void display();
void push()
{
if(top==MAXSIZE-1)
{
printf("full");
exit(0);
}
stack[top++]=ele;
}
int pop()
{
if(top==-1)
{
printf("empty");
exit(0);
}
ele=stack[top--];
}
void display()
{
if(top==-1)
{
printf("empty");
}
printf("elemen ts are");
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
}
void main()
{
int ch,op=1;
while(1)
{
printf("stack op\n");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your ch:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter ele to push:");
	scanf("%d",&ele);
	push(ele);
	break;
case 2:pop();
	break;
case 3:display();
	break;	
case 4:exit(0);
 default:printf("vaild inp");
 break;
 }
 }
 }
