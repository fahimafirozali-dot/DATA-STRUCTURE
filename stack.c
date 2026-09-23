#include<stdio.h>
#include <stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),item,opt;
do
{
printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
printf("your options:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("enter item:");
scanf("%d",&item);
push(item);
break;
case 2: item=pop();
printf("popped value=%d  \n",item);
break;           
case 3:
if(sp==-1)
printf("stack is empty\n");
else
{
printf("stack elements are:\n");
for(int i=sp;i>=0;i--)
printf("%d\n",stk[i]);
}
break;
case 4:exit(0);
}
}while(9);
}
void push(int x)
{
if(sp==SIZE-1)
{printf("stack is full");
return;
}
else
{
stk[++sp]=x;
return;
}
}
int pop()
{
if(sp==-1)
{
printf("stack is empty");
exit(0);
}
else{
sp--;
return stk[sp+1];
}
}
