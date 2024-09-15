#include <stdio.h>

int main(){
    int celsius;
    float fahrenheit;
    
    printf("Enter the temperature in celsius");
    scanf("%d",&celsius);
    
    fahrenheit  = (celsius * 9/5) + 32;
    printf("%d degree celsius is %d degree fahrenheit",celsius,fahrenheit);
    return 0;
}