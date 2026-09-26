#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *sp=NULL;
struct node *push(struct node*,int);
struct node *pop(struct node*,int*);
void display(struct node *);
int search(struct node *,int);
int main(){
int opt,data,found;
for(;;){
printf("1.push\n2.pop\n3.display\n4.search\n5.exit\n");
printf("Enter your choice:");
scanf("%d",&opt);
switch(opt){
case 1:
printf("Enter the element to insert:");
scanf("%d",&data);
sp=push(sp,data);
break;
case 2:
if(sp==NULL)
printf("Stack is empty!");
else
sp=pop(sp,&data);
printf("popped element is:%d\n",data);
break;
case 3:
display(sp);
break;
case 4:
printf("enter the element to be searched:");
scanf("%d",&data);
if(found!=0)
printf("The element %d is present\n",data);
else
printf("Not found");
break;
case 5:
exit(0);
break;
}
}
return 0;
}
struct node *push(struct node *sp,int data){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=data;
temp->next=sp;
sp=temp;
return sp;}
struct node *pop(struct node *sp,int *x)
{
struct node *temp;
if(sp!=NULL)
{
temp=sp;
*x=sp->data;
sp=sp->next;
free(temp);}
return sp;}
void display(struct node *sp){
if(sp==NULL){
printf("Stack is empty!\n");
return;}
printf("Stack elements are:\n");
while(sp!=NULL){
printf("%d\n",sp->data);
sp=sp->next;}}
int search (struct node *sp,int data){
while(sp!=NULL){
if(sp->data==data)
return 1;
sp=sp->next;}
return 0;
};
