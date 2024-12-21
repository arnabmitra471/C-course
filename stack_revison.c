#include <stdio.h>
#define MAX 10
int st[MAX], top = -1;
void push_element(int st[], int val);
int pop_element(int st[]);
int peek_element(int st[]);
void display(int st[]);
int main()
{
    int option, val;
    do
    {
        printf("\n ***** MAIN MENU*****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");

        printf("\n Enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n Enter the element to be pushed on the stack: ");
            scanf("%d", &val);
            push_element(st, val);
            break;

        case 2:
            val = pop_element(st);
            if (val != -1)
                printf("The element deleted from the stack is %d", val);
            break;
        case 3:
            val = peek_element(st);
            if (val != -1)
                printf("The value at the top of the stack is: %d", val);
            break;
        case 4:
            printf("\n The elements are: \n");
            display(st);
            break;
        }
    } while (option != 5);
}
void push_element(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf("\n STACK OVERFLOW"); // checking for the overflow condition and showing the appropriate message
    }
    else
    {
        top++;         // incrementing the top pointer
        st[top] = val; // inserting the new value at the top index in the stack
    }
}
int pop_element(int st[])
{
    int item;
    if (top == -1)
    {
        printf("\n STACK UNDERFLOW");
        return -1; // returning -1 signals underflow condition
    }
    else
    {
        item = st[top];
        top--;
        return item;
    }
}
int peek_element(int st[])
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
void display(int st[])
{
    int i;
    if (top == -1)
    {
        printf("\n The stack is empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\t", st[i]);
        }
    }
}