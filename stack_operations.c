#include <stdio.h>
#define MAX 30
int stack[MAX], top = -1;

void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display_stack(int st[]);

int main()
{
    int choice, val;
    do
    {
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n Enter the element to be pushed on the stack: ");
            scanf("%d", &val);
            push(stack, val);
            break;

        case 2:
            val = pop(stack);
            if (val != -1)
                printf("\n The element deleted from the stack is %d", val);
            break;

        case 3:
            val = peek(stack);
            if (val != -1)
                printf("\n The value stored at the top of the stack is %d", val);
            break;

        case 4:
            printf("\n The elements are: \n");
            display_stack(stack);
        }
    } while (choice != 5);

    return 0;
}
void push(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf("\n STACK OVERFLOW");
    }
    else
    {
        top++;
        st[top] = val;
    }
}
int pop(int st[])
{
    int item;
    if (top == -1)
    {
        printf("\n STACK UNDERFLOW");
        return -1;
    }
    else
    {
        item = st[top];
        top--;
        return item;
    }
}
int peek(int st[])
{
    if (top == -1)
    {
        printf("\n The stack is empty");
        return -1;
    }
    else
    {
        return st[top];
    }
}
void display_stack(int st[])
{
    if (top == -1)
    {
        printf("\n The stack is empty");
    }
    else
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", st[i]);
        }
    }
}