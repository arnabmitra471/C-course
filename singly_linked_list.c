#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);

int main()
{
    int option;
    do
    {
        printf("***** MAIN MENU *****\n");
        printf("1. Create a list \n");
        printf("2.Display the list \n");
        printf("3. Insert a node at the beginning \n");
        printf("4. Insert a node at the end \n");
        printf("5.Delete a node from the beginning \n");
        printf("6. Delete a node at the end \n");
        printf("7. Exit \n");
        printf("\n Enter a option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("\n The linked list has been created \n");
            break;

        case 2:
            start = display(start);
            break;

        case 3:
            start = insert_beg(start);
            break;

        case 4:
            start = insert_end(start);
            break;

        case 5:
            start = delete_beg(start);
            break;

        case 6:
            start = delete_end(start);
            break;
        }
    } while (option != 7);
    return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *new_node, *ptr;
    int val;
    printf("\n Enter -1 to end");
    printf("\n Enter the data: \n");
    scanf("%d", &val);
    while (val != -1)
    {

        new_node = (struct node *)malloc(sizeof(struct node)); // allocating memory dynamically for the new node
        new_node->data = val;                                  // initializing the data part with val
        new_node->next = NULL;                                 // initializing the next part with NULL for creating every single node
        if (start == NULL)
        {
            start = new_node; // Inserting the first node
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node; // inserting a new node at the end
        }
        printf("Enter the data: ");
        scanf("%d", &val);
    }
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;

    if (start == NULL)
    {
        printf("\n The linked list is empty\n");
    }
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            printf("\n The data stored is %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
    return start;
}
struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int val;
    printf("\n Enter the data: ");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = start;
    start = new_node;

    return start;
}
struct node *insert_end(struct node *start)
{
    struct node *new_node, *ptr;
    int val;
    printf("\n Enter the data: ");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = NULL;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    return start;
}
struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("\nThe linked list is empty");
        return start;
    }
    else
    {
        ptr = start; // initially ptr points to the first node i.e(the node being pointed by start)
        start = start->next;
        printf("\n The node being deleted is %d\n", ptr->data);
        free(ptr);
        return start;
    }
}
struct node *delete_end(struct node *start)
{
    struct node *ptr, *preptr;
    if (start == NULL)
    {
        printf("\n The linked list is empty");
        return start;
    }
    else if (start->next == NULL)
    {
        free(start);
        start = NULL; // set start = NULL as the list will be empty after deletion
    }
    else
    {
        ptr = start;
        preptr = ptr;
        while (ptr->next != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL;
        printf("The node being deleted is %d\n", ptr->data);
        free(ptr); // free the last node
    }
    return start;
}