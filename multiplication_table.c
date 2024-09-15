#include <stdio.h>
int main(){
    int num,i;
    printf("Enter the number to print it's multiplication table: ");
    scanf("%d",&num);
    
    // printing the multiplication table
    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n",num,i,num*i);
    

}