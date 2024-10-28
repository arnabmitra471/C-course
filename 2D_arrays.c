#include <stdio.h>


int main(){
    int marks[3][5],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
