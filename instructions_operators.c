#include <stdio.h>

int main(){
    int a = 2, c = 67, d = 56;
    
    float b = 24.98;

    char ch = 'D';

    a = ch;
    
    int i = 10;
    int j = i;
    printf("The value of a is %d and the value of ch is %d\n",a,ch);
    printf("The value of i is %d and the value of j is %d\n",i,j);

    /*
    This does not work for exponentiation in c
    int d = a ^ b
     
    */
    return 0;
}