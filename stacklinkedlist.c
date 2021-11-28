#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();
void peep();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    int choice=0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(1)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.peep\n5.exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:
            {
               peep();
               break; 
            }
            case 5:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}  
void push ()  
{  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
        printf("Enter the value");  
        scanf("%d",&ptr->val);  
        if(head==NULL)  
        {          
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed");   
}  
  
void pop()  
{   
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item popped");  
          
    }  
} 
void peep()
{
    if (head == NULL)  
    {  
        printf("stack is empty");  
    }  
    else
    printf("top element is %d",head->val); 
} 
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}  