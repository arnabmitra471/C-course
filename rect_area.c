#include <stdio.h>

int main(){
    int length,breadth,area;
    printf("Enter the length of the rectangle: \n");
    scanf("%d",&length);

    printf("Enter the breadth of the rectangle: \n");
    scanf("%d",&breadth);

    area = length * breadth;
    printf("The area of the rectangle is %d sq cm",area);
    return 0;
}