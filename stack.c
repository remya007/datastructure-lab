#include<stdio.h>
int s[100],opt,n,top,x,i;
void push();
void pop();
void display();
void main()
{
top=-1;
printf("enter the size of stack[max=100]");
scanf("%d",&n);
printf("\n stack operation using array");
printf("\n \t...");
printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
do
{
printf("\n enter the option");
scanf("%d",&opt);
switch(opt)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: printf("\n exit point");
break;
default : printf("\n enter a value option");
}
}
while(opt!=4);
}
void push()
{
if(top>=n-1){
printf("\n stack is overflow");
}
else
{
printf("\n enter a value to be pushed");
scanf("%d",&x);
top++;
s[top]=x;
}}
void pop()
{
if(top<=-1)
{
printf("\n stack is underflow");
}
else{
printf("\n poped element is %d",s[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n element is stack\n");
for(i=top;i>=0;i--)
printf("\n %d",s[i]);
printf("\n enter next option");
}
else{
printf("\n stack is empty");
}
}
