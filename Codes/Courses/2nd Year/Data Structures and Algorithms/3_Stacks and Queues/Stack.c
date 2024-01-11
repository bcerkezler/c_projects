#include <stdio.h>
#include <stdlib.h>

typedef struct SNode
{
    int data;
    struct SNode *next;
}SNode;

struct SNode *top = NULL;

void push(int);
void pop();
void seek();
void display();
int isEmpty();

int main()
{
    int choice = 0, value;
    
    printf("\n\n****** Stack Tool ******\n");
    printf("========================\n");
    printf("\n1.Push\n2.Pop\n3.Seek\n4.Display\n5.Exit\n");
    
    while (choice != 5)
    {
        printf("\nEnter your choice: ");         
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1:  
               printf("\nEnter the value: ");
               scanf("%d", &value);
               push(value);      
               break;  
            case 2:  
               pop();         
               break;  
            case 3: 
               seek();       
               break;  
            case 4:  
               display();       
               break;  
            case 5:  
               printf("\nExiting..");
               exit(0);        
               break;    
            default:  
               printf("\nPlease enter valid choice..");  
        }    
    }
    return 0;
}

void push(int value)
{
    SNode *new;
    new = (SNode*) malloc(sizeof(SNode));

    new->data = value;
    if (top == NULL)
    {
        new->next = NULL;
        top = new;
    }
    else
    {
        new->next = top;
        top = new;
    }
    printf("\nItem pushed.");
}

void pop()
{
    SNode *temp;
    
    if (isEmpty())
    {
        printf("\nNo items to pop.");
    }
    else
    {
        temp = top;
        top = top->next;
        printf("\nItem popped.The value is %d.", temp->data);
        free(temp);
    }
}

void seek()
{
    if(isEmpty())
    {
        printf("\nCan't seek.");
    }
    else 
    {     
        printf("\nTop item is %d.", top->data);
    }
}

void display()
{
    SNode *temp;
    temp = top;

    if (isEmpty())
    {
        printf("\nStack is empty.");
    }
    else
    {
        printf("\n");
        while (temp != NULL)
        {
            printf(" %d\n", temp->data);
            printf("---\n");
            temp = temp->next;
        }
        
    }
}

int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }   
}