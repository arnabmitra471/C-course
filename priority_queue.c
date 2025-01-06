#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *start = NULL;
struct node *insert_element_pr(struct node *);
struct node *delete_element_pr(struct node *);
void display_pr_queue(struct node *);

int main()
{
    int option;
    do
    {
        printf("\n *****MAIN MENU*****");
        printf("\n 1. INSERT");
        printf("\n 2. DELETE");
        printf("\n 3. DISPLAY");
        printf("\n 4. EXIT");
        printf("\n Enter your option: ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
            start = insert_element_pr(start);
            break;
            case 2:
            start = delete_element_pr(start);
            break;
            case 3:
            display_pr_queue(start);
            break;
        }
    }while(option != 4);
    return 0;
}
struct node *insert_element_pr(struct node *start)
{
    struct node *new_node, *ptr;
    int val, pri;
    printf("Enter the value and its priority: ");
    scanf("%d%d", &val, &pri);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->priority = pri;
    if (start == NULL || pri < start->priority)
    {
        new_node->next = start;
        start = new_node;
    }
    else
    {
        ptr = start;
        while(ptr ->next != NULL && ptr ->next->priority <= pri)
            ptr = ptr ->next;
        new_node ->next = ptr ->next; // setting the next part of the new node to point to the next node after ptr
        ptr ->next = new_node; // Making the next part of ptr point to the new node
    }
    return start;
}
struct node *delete_element_pr(struct node *start)
{
    struct node *ptr;
    if(start == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else
    {
        ptr = start;
        printf("\n The deleted item is %d",ptr ->data);
        start = start ->next;
        free(ptr);
    }
    return start;
}
void display_pr_queue(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if(start == NULL)
    {
        printf("\n The queue is empty");
    }
    else
    {
        printf("\n The priority queue is: ");
        while(ptr != NULL)
        {
            printf("\t %d[priority = %d]",ptr ->data,ptr ->priority);
            ptr = ptr ->next;
        }
    }
}