#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int row, column, value;
    struct Node *next; 
};

void append(struct Node**,int,int,int);


int main()
{
    struct Node* head = NULL;
    int N, M, i, j, tmp_value;
    
    printf("Please enter row and column values (N,M): ");
    scanf("%d", &N);
    scanf("%d", &M);

    printf("Please enter the matrix elements: ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("Mtr[%d][%d]: ", i, j);
            scanf("%d", &tmp_value);
            append(&head,i,j,tmp_value);
        }
        
    }
    

}

void append(struct Node** head_ref, int row, int column, int value)
{
    
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  
    struct Node *last = *head_ref;  
  
    
    new_node->row  = row;
    new_node->column  = column;
    new_node->value  = value;
  
    
    new_node->next = NULL;
  
    
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
  
    
    while (last->next != NULL)
        last = last->next;
  
    
    last->next = new_node;
    return;
}