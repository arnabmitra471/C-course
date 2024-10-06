#include <stdio.h>
#define MAX 10
int queue[MAX],rear = -1, front = -1;
int insert_element(int);
int remove_element();
int isFull();
int isEmpty();
void display();
int main(){
    int choice,element,val;
    do
    {
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\n Enter the element to insert: ");
            scanf("%d",&element);
            val = insert_element(element);
            if(val != -1)
                printf("\nThe element inserted is %d\n",element);
            break;

            case 2:
            val = remove_element();
            printf("\nThe element deleted is %d\n",val);
            break;

            case 3:
            display();
            break;
        }
    } while (choice != 4);

    return 0;
}
int insert_element(int value){
    if(isFull()) // check of the queue is full or not
    {
        printf("\nQUEUE OVERFLOW \n");
        return -1; // return -1 to indicate overflow
    }
    else if(isEmpty()) /* if the queue is empty, if it is then set front and rear to 0 and
    insert the first element at queue[rear] */
    {
        front = rear = 0;
        queue[rear] = value;
        return 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        return 0; // return 0 to indicate success
    }
}
int remove_element(){
    int item;
    if(isEmpty())
    {
        printf("\nQUEUE UNDERFLOW or isn't completely full \n");
        rear = 0;
        return -1;
        
    }
    else if(front == rear)
    {
        item = queue[front];
        printf("\n The dequeued element is %d\n",item);
        front = rear = -1; // again the queue is empty
        return item;

    }
    else
    {
        front = (front + 1) % MAX;
        item = queue[front];
        return item;
    }
}
int isFull(){
    if(((rear + 1) % MAX == front))
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(front == -1 && rear == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void display(){
    int i;

    if(isEmpty())
    {
        printf("\n The queue is empty\n");
    }
    else
    {
        if(front <= rear)
        {
            // The elements are stored continuously between front and rear
            printf("The queue elements are: \n");
            for(i= front;i <= rear;i++)
            {
                printf("%d\n",queue[i]);
            }
        }
        else
        {
            for(i=front;i <= rear; i++)
            {
                printf("%d \n",queue[i]);
            }
            for(i=0;i <= rear;i++)
            {
                printf("%d \n",queue[i]);
            }
        }
    }
}
