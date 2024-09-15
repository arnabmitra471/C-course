#include <stdio.h>

int main(){
    int celsius;
    float fahrenheit;
    
    printf("Enter the temperature in celsius: ");
    scanf("%d",&celsius);
    
    fahrenheit  = (celsius * 9.0/5.0) + 32;
    printf("%d degree celsius is %f degree fahrenheit",celsius,fahrenheit);
    return 0;
}