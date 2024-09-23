#include <stdio.h>
int main(){
    int marks[30],i,n,sum = 0;
    float mean = 0.0;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("The elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",marks[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += marks[i];
    }
    mean = sum/n;
    printf("The mean of the numbers is %.2f\n",mean);

    if(mean > 40)
    {
        printf("You have passed \n");
        printf("Congrats !!");
    }
    else
    {
        printf("You have failed !!\n ");
        printf("Better luck next time !!");
    }
    return 0;

}