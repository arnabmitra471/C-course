#include <stdio.h>
int main(){
    int radius,height;
    float area,volume;
    printf("Enter the base radius of the cylinder: ");
    scanf("%d",&radius);

    printf("Enter the height of the cylinder: ");
    scanf("%d",&height);
    
    area = 3.14 * radius * radius;
    volume = 3.14 * radius * radius * height;
    
    printf("The area of the circle is %f\n",area);
    printf("The volume of the cylinder is %.2f\n",volume);
    return 0;
}