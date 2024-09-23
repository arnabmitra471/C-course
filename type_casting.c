#include <stdio.h>

int main(){
    int num1 = 28;
    float num2 = 32.23;
    int num3 = 7212;
    float num4 = num3;

    num1 = (int) num2;

    printf("%d\n",num1);
    printf("%10.2f\n",num4);
    return 0;
}