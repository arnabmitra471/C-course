#include <stdio.h>
#define MAX 50

int queue[MAX], front = -1, rear = -1;
// function prototypes
void enqueue(int[MAX], int);
int dequeue(int[MAX]);
int isFull(int[MAX]);
void display(int[MAX]);
int isEmpty(int[MAX]);

int main()
{
    int choice, value, deleted_value;
    do
    {
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. display\n");
        printf("4. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &value);
            enqueue(queue, value);
            break;
        case 2:
            printf("Enter the element you want to delete: ");
            scanf("%d", &value);
            deleted_value = dequeue(queue);
            printf("Deleted %d\n", deleted_value);
            break;
        case 3:
            display(queue);
            break;
        }

    } while (choice != 4);
    return 0;
}
// function for inserting an element in the queue
void enqueue(int queue[MAX], int value)
{
    if (isFull(queue))
    {
        printf("The queue is already full");
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
            queue[rear] = value;
        }
    }
}
// function for deleting an element from the queue
int dequeue(int queue[MAX])
{
    int item;
    if (isEmpty(queue))
    {
        printf("The queue is empty \n");
        front = rear = -1;
        return -1;
    }
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        item = queue[front];
        front++;
    }
    return item;
}
// function for checking if the queue is full
int isFull(int queue[MAX])
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// function for checking if the queue is empty
int isEmpty(int queue[MAX])
{
    if(front == -1 || front > rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// function for displaying the elements of the queue
void display(int queue[MAX])
{
    if (isEmpty(queue))
    {
        printf("The queue is empty\n");
    }
    else
    {
        int i;
        printf("The queue elements are: \n");
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}