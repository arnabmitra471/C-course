#include <stdio.h>
#define MAX 30
int stack[MAX], topA = -1, topB = MAX;

void pushA(int st[], int val);
void pushB(int st[], int val);
int popA(int st[]);
int popB(int st[]);
void display_stackA(int st[]);
void display_stackB(int st[]);

int main()
{
    int choice,val;

    do
    {
        printf("\n 1. PUSH IN STACK A");
        printf("\n 2. PUSH IN STACK B");
        printf("\n 3. POP FROM STACK A");
        printf("\n 4. POP FROM STACK B");
        printf("\n 5. DISPLAY STACK A");
        printf("\n 6. DISPLAY STACK B");
        printf("\n 7. EXIT");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\n Enter the value to push on stack A: ");
            scanf("%d",&val);
            pushA(stack,val);
            break;

            case 2:
            printf("\n Enter the value to push on stack B: ");
            scanf("%d",&val);
            pushB(stack,val);
            break;

            case 3:
            val = popA(stack);
            if(val != -1)
                printf("\n The value popped from stack A = %d",val);
            break;

            case 4:
            val = popB(stack);
            if(val != -1)
                printf("\n The value popped from stack B is %d",val);
            break;

            case 5:
            printf("The contents of stack A are: \n");
            display_stackA(stack);
            break;

            case 6:
            printf("The contents of stack B are: \n");
            display_stackB(stack);
            break;
            
        }

    } while (choice != 7);

    return 0;
}
void pushA(int st[], int val)
{
    if (topA == topB - 1)
    {
        printf("\n STACK A OVERFLOW");
    }
    else
    {
        topA++;
        st[topA] = val;
    }
}
int popA(int st[])
{
    int item;
    if (topA == -1) // Then the stack is already empty
    {
        printf("\n STACK A UNDERFLOW");
        return -1;
    }
    else
    {
        item = st[topA];
        topA--;
        return item;
    }
}
void pushB(int st[], int val)
{
    if (topB - 1 == topA)
    {
        printf("\n STACK B OVERFLOW");
    }
    else
    {
        topB--;
        st[topB] = val;
    }
}
int popB(int st[])
{
    int val;
    if (topB == MAX)
    {
        printf("\n STACK B UNDERFLOW");
        return -1;
    }
    else
    {
        val = st[topB];
        topB++;
        return val;
    }
}
void display_stackA(int st[])
{
    int i;
    if (topA == -1)
    {
        printf("\n STACK A IS EMPTY");
    }
    else
    {
        for (i = topA; i >= 0; i--)
        {
            printf("%d\n", st[i]);
        }
    }
}
void display_stackB(int st[])
{
    int i;

    if (topB == MAX)
    {
        printf("\n STACK B IS EMPTY");
    }
    else
    {
        for (i = topB; i < MAX; i++)
        {
            printf("%d\n", st[i]);
        }
    }
}