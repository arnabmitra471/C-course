#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age > 60)
    {
        printf("You can drive and you are a senior citizen");
    }
    else if(age > 18){
        printf("We are inside if\n");
        printf("You are eligible to drive\n");
    }
    
    else{
        printf("We are inside else\n");
        printf("You are not eligible to drive\n");
    }
    return 0;
}