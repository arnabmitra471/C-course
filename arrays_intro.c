#include <stdio.h>

int main(){
    // array declaration with initialization
    int arr[20] = {2,4,8,10,12,87,90,187,234,987,67,98,12,87,33,452,875,872,908,123};

    float arr2[] = {21.87,12.86,98.34,23.67,76.32,122.874,1234.2134};
    int i,j,k;
    // array declaration
    float marks[20];

    for(i = 0;i<20;i++)
        printf("%5d\n",arr[i]);

    for(j = 0;j<7;j++)
    {
        printf("%10.2f\n",arr2[j]);
    }
    // initializing each element of the marks array with a default value
    for(k = 0;k < 20; k++)
    {
        marks[k] = (float) k * 2.1;
    }
    // printing all the elements
    for(k=0; k<20; k++)
    {
        printf("%.2f\t",marks[k]);
    }
    
    
    return 0;
}