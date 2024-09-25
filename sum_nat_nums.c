#include <stdio.h>

int main(){
    int n,sum = 0,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    i = n;
    do
    {
        sum += i;
        i--;
    }while(i >= 1);

    printf("The sum of %d terms is %d",n,sum);
    
    return 0;
}