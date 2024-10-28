#include <stdio.h>

int main(){
    int arr[30],i,n;

    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n The array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("\t %d",arr[i]);
    }
    return 0;
}