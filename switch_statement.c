#include <stdio.h>

int main(){
    char letter;
    printf("Enter a letter: ");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'A':
        case 'a':
        printf("%c is a vowel\n",letter);
        break;
        case 'E':
        case 'e':
        printf("%c is a vowel\n",letter);
        break;

        case 'I':
        case 'i':
        printf("%c is a vowel\n",letter);
        break;
        case 'O':
        case 'o':
        printf("%c is a vowel\n",letter);
        break;
        case 'U':
        case 'u':
        printf("%c is a vowel\n",letter);
        break;

        default:
        printf("%c is a consonant\n",letter);

    }
    return 0;
}