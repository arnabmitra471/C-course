#include <stdio.h>
#define MAX 10
int queue[MAX],rear = -1, front = -1;
void insert_element(int);
int remove_element(int value);
int isFull();
int isEmpty();
void display();
int main(){
    
    return 0;
}
void insert_element(int value){
    if(isEmpty()) // initial case
    {
        front = rear = 0;
    }
    else if(isFull()) // if the queue is already full and still more elements are being inserted
    {
        printf("\n QUEUE OVERFLOW");
    }
    else
    {
        queue[rear] = value;
        (rear += 1) % MAX;
    }
}
int remove_element(int value){
    int item;
    if(isEmpty())
    {
        printf("\n QUEUE UNDERFLOW or isn't completely full");
        rear = 0;
        insert_element(value);
        
    }
    else if(front == rear)
    {
        printf("The dequeued element is %d",queue[front]);
        front = rear = -1; // again the queue is empty
    }
    else
    {
        (front += 1) % MAX;
        item = queue[front];
        return item;
    }

}
int isFull(){
    if(((rear + 1) % MAX == front) || (front == 0 && rear == MAX - 1))
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if((front == -1 && rear == -1) || (front != 0 && rear == MAX -1))
    {
        return 1;
    }
    else{
        return 0;
    }

}
void display(){

}
