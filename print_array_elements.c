#include <stdio.h>
int main(){
    int arr[30],i,n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("\n Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n The elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}