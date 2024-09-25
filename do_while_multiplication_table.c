#include <stdio.h>

int main(){
    
    int n,i = 21;
    printf("Enter the number: ");
    scanf("%d",&n);

    do{
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }while(i <= 20);
    return 0;
}