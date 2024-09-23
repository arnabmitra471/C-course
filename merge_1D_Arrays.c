#include <stdio.h>
int main(){
    int arr1[20],arr2[20],n1,n2,total_size,arr3[40],i,j,k;

    printf("Enter the number of elements in the first array: ");
    scanf("%d",&n1);

    printf("Enter the elements of the first array: \n");
    
    for(i=0; i<n1; i++)
        scanf("%d",&arr1[i]);

    printf("Enter the number of elements in the second array: ");
    scanf("%d",&n2);
    printf("Enter the elements of the second array: \n");
    for(j=0; j<n2; j++)
        scanf("%d",&arr2[j]);

    // calculating the total number of elements in the merged array
    total_size = n1 + n2;

    for(i=0;i<n1;i++)
    {
        arr3[i] = arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        arr3[n1 + j] = arr2[j];
    }

    printf("The elements of the merged array are: \n");
    for(k=0; k<total_size; k++)
        printf("The value at index %d is %d\n",k,arr3[k]);

    return 0;
}