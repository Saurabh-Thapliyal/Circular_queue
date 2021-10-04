#include<stdio.h>
#include<stdlib.h>
#define max 100
int push(int[],int);
int pop(int[],int);
void display(int[],int);

int main()
{
int s[max],top=-1; 
int c;
printf("stack implementation\n");
do{
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("enter choice: ");
scanf("%d",&c);
switch(c)
{
case 1:
{
top=push(s,top);
break;
}
case 2:
{
top=pop(s,top);
break;
}
case 3:
{ 
display(s,top);
break;
}
case 4:
 exit(1);
default:
{
printf("\ninvalid choice\n");
}
}
}while(c!=4);
return 0;
}
 

int push(int s[],int top)
{
int n;
if(top==max-1)
{
printf("stack overflow\n");
}

else
{
printf("enter a value to be pushed\n");
scanf("%d",&n);
top=top+1;
s[top]=n;
}
return top;
}

int pop(int s[],int top)
{
int x;
if(top==-1)
{
printf("stack underflow\n");
}
else
{
x=s[top];
top=top-1;
printf("the poped element is %d",x);
}
return top;
}



void display(int s[],int top)
{
if(top==-1)
{
printf("empty stack\n");
}
else
{
printf("elements in the stack\n");
for(int i=top;i>=0;i--)
printf("%d\t",s[i]);
}
}
