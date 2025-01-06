#include <stdio.h>
#define MAX 20
int queue[MAX],front = -1,rear = -1;
void enqueue(int queue[],int element);
int dequeue(int queue[]);
int peek(int queue[]);
void display_circ_queue(int queue[]);

int main() {
    int val,option;
    do{
        printf("\n ***** Main Menu *****");
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Display");
        printf("\n 4. Peek");
        printf("\n 5. Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
            printf("\n Enter the element to be inserted: ");
            scanf("%d",&val);
            enqueue(queue,val);
            break;
            case 2:
            val = dequeue(queue);
            if(val != -1)
                printf("\n The element deleted is %d",val);
            break;
            case 3:
            display_circ_queue(queue);
            break;
            case 4:
            val = peek(queue);
            if(val != -1)
                printf("The front value in the queue is %d",val);
        }
    }while(option != 5);

    return 0;
}
void enqueue(int queue[],int element){
    if((rear + 1)%MAX == front) // checking for overflow condition
    {
        printf("\n Queue overflow");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = element;
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = element;
    }
    // printf("The element %d has been inserted at rear position %d",queue[rear],rear);
}
int dequeue(int queue[])
{
    int item;
    if(front == -1)
    {
        printf("\n QUEUE UNDERFLOW");
        return -1;
    }
    else
    {
        item = queue[front];
        if(front == rear)
        {
            front = rear = -1; // reset front and rear to -1
        }
        else
        {
            front = (front + 1) % MAX;
            // printf("The element %d has been deleted from front position %d",queue[front],front); // Move front to the next element in circular increment
        }
        return item;
    }
}
void display_circ_queue(int queue[])
{
    int i;
    if(front == -1)
    {
        printf("\n The queue is empty");
    }
    else
    {
        printf("\n The elements are: \n");
        if(front <= rear)
        {
            for(i=front; i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }
        }
        else
        {
            for(i=front;i<MAX;i++)
            {
                printf("%d\t",queue[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }
            
        }
        printf("\n");
    }
}
int peek(int queue[])
{
    if(front == -1)
    {
        printf("\n The queue is empty");
        return -1;
    }
    else
        return queue[front];
}