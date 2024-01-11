#include <stdio.h>
#include <stdlib.h>

typedef struct QNode
{
    int key;
    struct QNode *next;
}QNode;

typedef struct Queue
{
    struct QNode *front, *rear;
}Queue;


Queue* createQueue();
QNode* newNode(int);
void enqueue(Queue*, int);
int dequeue(Queue*);
int isEmpty(Queue*);
void seek(Queue*);
void display(Queue*);


int main()
{
    
    Queue *q = createQueue();
    int choice = 0, value;
    
    printf("\n\n****** Queue Tool ******\n");
    printf("========================\n");
    printf("\n1.Enqueue\n2.Dequeue\n3.Seek\n4.Display\n5.Exit\n");
    
    while (choice != 5)
    {
        printf("\nEnter your choice: ");         
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1:  
               printf("\nEnter the value: ");
               scanf("%d", &value);
               enqueue(q,value);      
               break;  
            case 2:  
               value = dequeue(q);
               printf("%d exited the queue.\n", value);         
               break;  
            case 3: 
               seek(q);       
               break;  
            case 4:  
               display(q);       
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

Queue* createQueue()
{
    Queue *q = (Queue*) malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}


QNode* newNode(int value)
{
    QNode *new = (QNode*) malloc(sizeof(QNode)); 
    new->key = value;
    new->next = NULL;
    return new; 
}

void enqueue(Queue *q, int key)
{
    QNode *new = newNode(key);
    if (isEmpty(q))
    {
        q->front = q->rear = new;
    }
    else
    {
        q->rear->next = new;
        q->rear = new;
    }   
}

int dequeue(Queue *q)
{
    QNode *tmp = q->front;
    int key;

    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
        return;
    }
    else
    {
        key = q->front->key;
        q->front = q->front->next;
        free(tmp);
        if (q->front == NULL)
        {
            q->rear = NULL;
        }
        return key;
    }
}

int isEmpty(Queue *q)
{
    if (q->front == NULL && q->rear == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void seek(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("%d is next on the queue.\n", q->front->key);
    }   
}

void display(Queue *q)
{
    QNode *tmp = q->front;
    
    printf("Current status of the queue: \n");

    while (tmp != NULL)
    {
        printf("%d  ", tmp->key);
        tmp = tmp->next;
    }   
}