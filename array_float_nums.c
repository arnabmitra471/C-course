#include <stdio.h>
int main(){
    float arr[] = {1,2,3,4,5,34.13};
    int i;
    
    for(i=0;i<6;i++)
        printf("%f\t",arr[i]);

    return 0;
}