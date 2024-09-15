#include <stdio.h>
int main(){
    /* syntax for declaring a variable 
    data_type variable_name;
    data_type variableName = value;
    */

    int num1,num2,sum; // variable declaration
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    sum = num1 + num2;
    printf("\n The sum of %d and %d is %d",num1,num2,sum);

    return 0;

}