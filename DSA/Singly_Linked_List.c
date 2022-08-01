#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next; 
} NODE;

NODE *create_node(int value);
void add(NODE *head, int value);
NODE *add_beg(NODE *head, int value);
void add_pos(NODE* head, int value, int pos);
void delete(NODE *head);
NODE *del_beg(NODE *head);
void del_pos(NODE *head, int pos);
void print_list(NODE *head);

int main()
{
    NODE *head;
    printf("...Singly linked list implementation...\n");
    
    head = create_node(1);
    print_list(head);
    add(head,2);
    print_list(head);
    add(head,3);
    print_list(head);
    head = add_beg(head,4);
    print_list(head);
    add_pos(head,5,3);
    print_list(head);
    delete(head);
    print_list(head);
    head = del_beg(head);
    print_list(head);
    del_pos(head,2);
    print_list(head);
    
    return 0;
}

NODE *create_node(int value)
{
    NODE *new = (NODE*) malloc(sizeof(NODE));
    new->data = value;
    new->next = NULL;
    return new;
}

void add(NODE *head, int value)
{
    NODE *tmp = head, *new;

    while(tmp->next != NULL) 
        tmp = tmp->next;

    new = create_node(value);
    tmp->next = new;
}

NODE *add_beg(NODE *head, int value)
{
    NODE *new;
    new = create_node(value);
    new->next = head;
    head = new;
    return head;
}

void add_pos(NODE* head, int value, int pos)
{
    NODE *tmp = head, *new;
    int i = 1;
    
    while(i != (pos-1)) {
        tmp = tmp->next;
        i++;
    }
    
    new = create_node(value);
    new->next = tmp->next;
    tmp->next = new;
}

void delete(NODE *head)
{
    NODE *tmp = head;

    while (tmp->next->next != NULL)
        tmp = tmp->next;

    free(tmp->next);
    tmp->next = NULL;
}

NODE *del_beg(NODE *head)
{
    NODE *tmp = head;
    
    head = head->next;
    free(tmp);
    return head;
}

void del_pos(NODE *head, int pos)
{
    NODE *tmp = head, *tmp2;
    int i = 1;
    
    while(i != (pos-1)) {
        tmp = tmp->next;
        i++;
    }
    
    tmp2 = tmp->next;
    free(tmp2);
    tmp->next = tmp->next->next;
}

void print_list(NODE *head)
{
    NODE *tmp = head;

    while(tmp != NULL) {
        printf("%d->", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}