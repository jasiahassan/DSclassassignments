//program for showing frequency of a given node

#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void count();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("enter your choice");
		printf("\n 1 for  creating the linked list \n 2 for view \n 3 for showing the frequency of a given element in a linked list");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:count();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}


}
//create funtion
void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 //view or traverse function
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");
 }
  
  //function to count the frequency of a given element in a linked list
  void count()
  {
  	int element,count=0;
  	struct node *ptr=head;
  	printf("enter the element whose frequency you want to check");
  	scanf("%d",&element);
  	while(ptr!=NULL)
    {
      	if(ptr->data==element)
      	{
      		count++;
	    }
	    ptr=ptr->next;
	 }
     printf("frequency of a given element =%d\n",count);
		  
  }

