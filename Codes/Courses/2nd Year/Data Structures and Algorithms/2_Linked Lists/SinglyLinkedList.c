#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *next;
}NODE;

struct Node *head = NULL;

void insert_head(int);
void append(int);
void insert_after(int,int);
void delete_head();
void delete_last();
void delete(int);
void search(int);
void display();

int main()
{
    int choice = 0, value, loc;
    
    printf("\n\n********* Linked List Tool *********\n");
    printf("\nChoose one option at a time from the list.\n");
    printf("\n=============================================\n");
    printf("\n1.Insert as head\n2.Insert as last node\n3.Insert after a given node\n4.Delete the head\n");  
    printf("5.Delete last node\n6.Delete given node\n7.Search for an element\n8.Display\n9.Exit\n");
    
    while (choice != 9)
    {
        printf("\nEnter your choice: ");         
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1:  
               printf("\nEnter the value: ");
               scanf("%d", &value);
               insert_head(value);      
               break;  
            case 2:  
               printf("\nEnter the value: ");
               scanf("%d", &value);
               append(value);         
               break;  
            case 3:  
               printf("\nEnter the location: ");
               scanf("%d", &loc);
               printf("\nEnter the value: ");
               scanf("%d", &value);
               insert_after(loc,value);       
               break;  
            case 4:  
               delete_head();       
               break;  
            case 5:  
               delete_last();        
               break;  
            case 6:  
               printf("\nEnter the location: ");
               scanf("%d", &loc);
               delete(loc);          
               break;  
            case 7:  
               printf("\nEnter the value: ");
               scanf("%d", &value);
               search(value);         
               break;  
            case 8:  
               display();        
               break;  
            case 9:  
               printf("\nExiting..");
               exit(0);  
               break;  
            default:  
               printf("\nPlease enter valid choice..");  
        }    
    }
    
    return 0;
}

void insert_head(int value)
{
    NODE *new;
    new = (NODE*) malloc(sizeof(NODE));

    new->data = value;
    new->next = head;
    head = new;
    printf("\nNode inserted.");
}

void append(int value)
{
    NODE *new,*temp;
    new = (NODE*) malloc(sizeof(NODE));

    new->data = value;
    if (head == NULL)
    {
        new->next = NULL;
        head = new; 
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->next = NULL;  
    }
    printf("\nNode inserted.");
}

void insert_after(int loc, int value)
{
    NODE *new,*temp;
    int i;

    new = (NODE*) malloc(sizeof(NODE));
    
    temp = head;
    new->data = value;

    for (i = 0; i < loc-1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("\nCan't insert.\n");
            return;
        }
    }

    new->next = temp->next;
    temp->next = new;
    printf("\nNode inserted.");
}

void delete_head()
{
    NODE *temp;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    
    temp = head;
    head = temp->next;
    free(temp);
    printf("\nNode deleted.");
}

void delete_last()
{
    NODE *prev,*curr;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        curr = head;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        free(curr);
    }
    printf("\nNode deleted.");
}

void delete(int loc)
{
    NODE *prev,*curr;
    int i;
    
    curr = head;

    for (i = 0; i < loc-1; i++)
    {
        prev = curr;
        curr = curr->next;

        if (curr == NULL)
        {
            printf("\nCan't delete.\n");
            return;
        }       
    }
    
    prev->next = curr->next;
    free(curr);
    printf("\nNode deleted.");
}

void search(int value)
{
    NODE *temp;
    int i = 0, flag = 0;

    temp = head;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                printf("\nItem found in node %d\n", i+1);
                flag = 1;
            }
            i++;
            temp = temp->next;
        }
        
        if (flag == 0)
        {
            printf("\nItem not found.\n");
        }
    }
}

void display()
{
    NODE *temp;
    
    temp = head;

    if (head == NULL)
    {
        printf("\nNothing to print.\n");
    }
    else
    {
        printf("\nCurrent List: ");
        while (temp != NULL)
        {
            printf("%d  ", temp->data);
            temp = temp->next;
        }
    }
}
