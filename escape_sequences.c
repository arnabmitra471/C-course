#include <stdio.h>
int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line

    printf("Hey I am good \' nice\n");
    printf("Hey I am good \n");
    printf("Hey I am good\a\n");
    printf("Tab \t space\n");
    printf("Vertical \v tab\n space\n");
    printf("Null character \0");
    printf("\\\n");
    printf("\\n");

    return 0;
}