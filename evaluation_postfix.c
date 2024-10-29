#include <stdio.h>
#define MAX 100
char st[MAX],top = -1;

void push(char st[MAX],char value);
char pop(char st[MAX]);
void infix_postfix(char source[MAX],char target[MAX]);
int main(){
    
    return 0;
}
void push(char st[MAX],char value)
{
    if(top == MAX - 1)
    {
        printf("\n STACK OVERFLOW");
    }
    else
    {
        top ++;
        st[top] = value;
    }
}
char pop(char st[MAX])
{
    int item;
    if(top == -1)
    {
        printf("\n STACK UNDERFLOW");
        return -1
        
    }
    else
    {
        item = st[top];
    }
    return item;
}