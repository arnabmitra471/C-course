#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);
    // i++;
    // ++i;
    printf("The value of i is %d\n",i++); // post increment operator
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",i++);
    printf("The value of i is %d\n",++i); // pre increment operator
    printf("The value of i is %d\n",i--); // post decrement operator
    printf("The value of i is %d\n",i); // pre increment operator
    printf("The value of i is %d\n",--i); // pre decrement operator
    return 0;
}