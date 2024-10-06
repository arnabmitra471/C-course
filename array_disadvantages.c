#include <stdio.h>
int main(){
    int arr[30],i,n,new_element,pos;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("\n Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are: \n");

    for(i=0; i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the positon at which the element has to be inserted: ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert: ");
    scanf("%d",&new_element);

    for(i=n-1; i>=pos;i--)
    {
        arr[i + 1] = arr[i];
    }
    n += 1;
    arr[pos] = new_element;
    printf("After inserting %d the elements are: \n",new_element);
    for(i=0; i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}