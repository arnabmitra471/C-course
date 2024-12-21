#include <stdio.h>
#define MAX 20
int queue[MAX],front = -1,rear = -1;
void enqueue();
int dequeue();
int peek();
void display();

int main(){
    int option,val;
    do{
        printf("\n ***** Main Menu*****");
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Peek");
        printf("\n 4. Display");
        printf("\n 5. Exit");
        printf("\n Enter an option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: 
                enqueue();
                break;
            case 2:
                val = dequeue();
                if(val != -1)
                    printf("The element deleted is %d",val);
                break;
            case 3:
                val = peek();
                if(val != -1)
                    printf("The first value in the queue is %d",val);
                break;
            case 4:
                display();
                break;
                
        }

    }while(option != 5);
    return 0;
}
void enqueue()
{
    int num;
    printf("\n Enter the element to be inserted: ");
    scanf("%d",&num);

    if(rear == MAX-1)
    {
        printf("\n QUEUE OVERFLOW");
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    else
    {
        rear++;
        queue[rear] = num;
    }
    printf("Inserted element %d",num);
}
int dequeue()
{
    int item;
    if(front == -1 || front > rear)
    {
        printf("\n QUEUE UNDERFLOW");
        return -1;
    }
    else
    {
        item = queue[front];
        front++;
        if(front > rear)
        {
            front = rear = -1;
        }
        return item;
    }
}
int peek()
{
    if(front == -1 || front > rear)
    {
        printf("\n THE QUEUE IS EMPTY");
        return -1;
    }
    else
        return queue[front];
}
void display(){
    int i;
    if(front == -1 || front > rear)
    {
        printf("The QUEUE IS EMPTY");
    }
    else
    {
        for(i=front;i <= rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
