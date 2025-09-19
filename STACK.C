#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
void pop();
void display();
int stack[MAXSIZE];
int top=-1;
void main()
{
 int choice;
 clrscr();
 while(1)
 {
  clrscr();
  printf("STATIC IMPLIMENTATION OF STACK");
  printf("\n----------------------------");
  printf("\n1.push");
  printf("\n2.pop");
  printf("\n3.display");
  printf("\n4.exit");
  printf("\n-----------------------------");
  printf("\n\n enter your choice [1/2/3/4]:");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:push();
    break;
    case 2:pop();
    break;
    case 3:display();
    break;
    case 4:exit(0);
    default:printf("\n\n invalid chooooooice");
    }
    getch();
    }
 }
 void push()
 {
   int num;
   if(top==MAXSIZE-1 )
   {
   printf("\n\n stack is full(stack underflow)");
   return;
   }
     printf("\n\n enter the element to be pushed in stack");
     scanf("%d",&num);
     top++;
     stack[top]=num;
    }

 void pop()
 {
   int num;
   if(top==-1)
   {
     printf("|n stack is empty(stack underflow)");
     return;
   }
   num=stack[top];
   printf("\n\n enter the element popped from the stack:%d ",num);
   top--;
  }
   void display()
   {
     int i;
     if(top==-1)
     {
     printf("\n\n stack is empty(stack underflow)");
     return;
     }
     printf("\n\n elements are:\n");
     for(i=top;i>=0;i--)
     printf("stack[%d]:%d\n",i,stack[i]);
   }