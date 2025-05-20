#include<stdio.h>
#include<stdlib.h>
//linked list structure for storing integer data
struct node
{
int data;
struct node *next;
};
//function to create a new node
struct node *CreateNode(int val)
{
struct node *new1=(struct node *)malloc(sizeof(struct node));
new1->data = val;
new1->next= NULL;
return new1;
}
//function to insert a new node with value "val" in the beginning of the given list "*list";
struct node *InsertAtBegin(struct node *list,int val)
{
struct node *new1=CreateNode(val);
if(list == NULL)
{
list=new1;
return list;
}
new1->next=list;
list=new1;
return list;
}
//function to insert a new node with value "val" at the ending of the given list "*list";
struct node *InsertAtEnd(struct node *list,int val)
{
struct node *new1=CreateNode(val);
if(list == NULL)
{
list=new1;
return list;
}
struct node *temp=list;
while(temp->next != NULL)
{
temp=temp->next;
}
temp->next=new1;
return list;
}
struct node *DeletionAtBegin(struct node *list)
{
if(list == NULL)
{
printf("Deletion is not possible in empty list\n");
return list;
}
struct node *temp=list;
list=list->next;
list->next=NULL;
temp->next = NULL;
free(temp);
return list;
}
struct node *DeletionAtEnd(struct node *list)
{
if(list == NULL)
{
printf("Deletion is not possible\n");
return list;
}
struct node *temp=list;
if(list->next == NULL)
{
list= NULL;
free(temp);
return list;
}
while(temp->next->next != NULL)
{
temp= temp->next;
}
struct node *temp2=temp->next;
temp->next= NULL;
free(temp2);
return list;
}
void Display(struct node *list)
{
struct node *temp= list;
while(temp != NULL)
{
printf("%d -> ",temp->data);
temp=temp->next;
}
printf(" NULL\n");
}
struct node *CreateList()
{
int item;
int n;
struct node *list= NULL; //Creating an Empty list
printf("With how many values you want to create a list:\n");
scanf("%d",&n);
printf("The list is creating with %d values\n",n);
for(int i=0;i<n;i++)
{
printf("Enter the value %d:\n",i+1);
scanf("%d",&item);
list=InsertAtEnd(list,item);
}
printf("The created List is: ");
Display(list);
return list;
}
void menu()
{
    printf("\n");
printf("Here is The menu of single linked list Operations:\n");
printf("Enter 1 to create a list\n");
printf("Enter 2 to Insert at Begin\n");
printf("Enter 3 to insert at End\n");
printf("Enter 4 to Delete at Beginning\n");
printf("Enter 5 to Delete at Ending\n");
printf("Enter 6 to Print/Display the list\n");
printf("Enter any other value to exit\n\n");
}
void main()
{
struct node *List= NULL;
int ch,item;
while(1)
{
menu();
printf("Enter Your Choice: ");
scanf("%d",&item);
switch(item)
{
case 1:
List=CreateList();
break;
case 2:printf("Enter the value to insert at Beginning of the List:\n");
scanf("%d",&item);
List=InsertAtBegin(List,item);
printf("The list after insertion at beginning is: ");
Display(List);
break;
case 3:printf("Enter the value to insert at End of the list:\n");
scanf("%d",&item);
List=InsertAtEnd(List,item);
printf("The list after insertion at Ending is: ");
Display(List);
break;
case 4:List=DeletionAtBegin(List);
printf("The list after Deletion at beginning is: ");
Display(List);
break;
case 5:List=DeletionAtEnd(List);
printf("The list after Deletion at Ending is: ");
Display(List);
break;
case 6:
printf("The  List is: ");
Display(List);
break;
default:continue;
}
}
}
