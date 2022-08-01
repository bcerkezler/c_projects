#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 15

char contents[STACK_SIZE];
int top = 0;

bool is_empty(void);
bool is_full(void);
void stack_overflow(void);
void stack_underflow(void);
void push(char ch);
char pop(void);

int main()
{
    char ch, match;
    bool check = true;

    printf("Enter parantheses or braces: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
            push(ch);
        else if (ch == ')')
        {
            match = pop();
            if (match != '(')
            {
                check = false;
                break;
            }
        }
        else if (ch == '}')
        {
            match = pop();
            if (match != '{')
            {
                check = false;
                break;
            }
        }
        else
        {
            printf("Wrong input!\n");
            exit(EXIT_SUCCESS);
        }        
    }
    
    if (is_empty() || check == true)
        printf("Parantheses/braces are nested properly\n");
    else
        printf("Parantheses/braces aren't nested properly\n");

    return 0;
}



bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full())
        stack_overflow();
     else 
        contents[top++] = ch;       
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];    
}  

void stack_overflow()
{
    printf("Stack Overflow!\n");
    exit(EXIT_SUCCESS);
}

void stack_underflow()
{
    printf("Stack Underflow!\n");
    exit(EXIT_SUCCESS);
}