#include <stdio.h>

int main(){
    int num1 = -19,num2 = 5,sum,diff,prod,quot,rem;
    // arithmetic operators

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    rem = num1 % num2;
    
    printf("The sum of %d and %d is %d\n",num1,num2,sum);
    printf("The difference %d and %d is %d\n",num1,num2,diff);
    printf("The product of %d and %d is %d\n",num1,num2,prod);
    printf("The quotient of %d and %d is %d\n",num1,num2,quot);
    printf("The remainder of %d and %d is %d\n",num1,num2,rem);

    // Relational operators
    printf("num1 > num2 = %d\n",num1 > num2);
    printf("num1 < num2 = %d\n",num1 < num2);
    printf("num1 >= num2 = %d\n",num1 >= num2);
    printf("num1 <= num2 = %d\n",num1 <= num2);
    printf("num1 == num2 = %d\n",num1 == num2);
    printf("num1 != num2 = %d\n",num1 != num2);

    // Logical operators
    printf("num1 <= 18 && num2 <= 18 %d\n",num1 <= 18 && num2 <= 18);
    printf("num1 <= 18 || num2 <= 18 %d\n",num1 <= 18 || num2 <= 18);
    printf("!(num1 <= 18 && num2 <= 18) %d\n",!(num1 <= 18 && num2 <= 18));

    // Bitwise operators
    printf("num1 & num2 = %d\n",num1 & num2);
    printf("num1 | num2 = %d\n",num1 | num2);
    printf("~num1 = %d\n",~num1);
    printf("~num2 = %d\n",~num2);

    // shift operators
    printf("num1 << 2 %d\n",num1 << 2);
    printf("num1 >> 2 %d\n",num1 >> 2);

    return 0;
}