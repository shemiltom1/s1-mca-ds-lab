#include<malloc.h>
#include <stdio.h>
struct node1
{
int data ;
struct node1 *prev;
struct node1 *next;
};
struct node1 *start=NULL;
void insert_at_beg()
{
 int data;
 printf("enter data");
 scanf("%d",&data);
 struct node1 *node;
 node=malloc(sizeof(struct node1 ));
 if (start==NULL)
 {
 node->data=data;
 node->prev=NULL;
 node->next=NULL;
 start=node;
 }
 else
 {
 node->data=data;
 start->prev=node;
 node->next=start;

 start=node;
 } }
void insert_at_end()
{
int data;
printf("\n enter data");
scanf("%d",&data);
struct node1 *temp;
struct node1 *node;
temp=malloc(sizeof(struct node1));
node=malloc(sizeof(struct node1));
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
node->data=data;
node->prev=temp;
temp->next=node;
node->next=NULL;
}
void delete_at_beg()
{
if (start==NULL)
SJCET Palai 15 Department of MCA
Data Structure Lab
{
printf("\n empty noting to delete");
}
start=start->next;
printf("Deletetion is done");
}
void delete_at_end()
{
struct node1 *temp;
temp=malloc(sizeof(struct node1));
temp=start;
while(temp->next->next!=NULL)
 {
 temp=temp->next;
 }
 temp->next=NULL;
}
void insert_at_pos()
{
 int pos,data;
 printf("enter pos wnt to insert");
 scanf("%d",&pos);
 struct node1 *temp,*ptr;
 temp=malloc(sizeof(struct node1 ));

 ptr=malloc(sizeof(struct node1));
 temp=start;
 for (int i=1;i<pos;i++)
 {
 temp=temp->next;
 }
 printf("\n enter value to add");
 scanf("%d",&data);
 ptr->data=data;
 ptr->next=temp->prev->next;
 ptr->prev=temp->prev;
 temp->prev->next=ptr;
 ptr->prev=ptr;
}
void delete_at_pos()
{
 int pos;
 printf("enter pos wnt to delete");
 scanf("%d",&pos);
 struct node1 *temp;
 temp=malloc(sizeof(struct node1 ));
 temp=start;
 if(temp==NULL)
 {
 printf("Nothing to delete");
 return 0;

 }
 if (pos==1)
 {
 delete_at_beg();
 }
 for(int i=1;i<pos;i++)
 {
 temp=temp->next;
 }
 temp->prev->next=temp->next;
 temp->next->prev=temp->prev;
 }
void print()
 {
 struct node1 *temp;
 temp=malloc(sizeof(struct node1));
 temp=start;
 while (temp!=NULL)
 {
 printf("\t %d",temp->data);
 temp=temp->next;
 }
 }
void main()
{

int ch;
while(1)
{
printf("\n Enter your choice \n \
 1 Insert at Begining \n \
 2 Insert at end \n \
 3 Insert at pos \n \
 4 delete from beg \n \
 5 delete from end \n \
 6 delete from pos \n \
 7 print \n \
 8 exit \n ");
scanf("%d",&ch);
switch(ch)
{
case 1:insert_at_beg();break;
case 3:insert_at_pos();break;
case 2:insert_at_end();break;
case 4:delete_at_beg();break;
case 5:delete_at_end();break;
case 6:delete_at_pos();break;
case 7:print();break;
case 8:exit(0);
}}}