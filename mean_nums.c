#include <stdio.h>

int main(){
    int arr[20],i,n,sum = 0;
    float mean = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        sum += arr[i];
    
    mean = sum/n;

    printf("\n The sum of the array elements is %d",sum);
    printf("\n The mean of the elements is %.2f",mean);
    return 0;
}