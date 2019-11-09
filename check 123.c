#include<stdio.h>
int main()
{
    char letter;

    printf("Enter a letter : ");
    scanf("%c",&letter);

    if(1){
    printf("Using IF statements \n");
    if(letter == 'A' || letter == 'a' ){
        printf("A is a vowel");
    }else if(letter == 'E' || letter == 'e'){
        printf("E is a vowel");
    }else if(letter == 'I' || letter == 'i'){
        printf("I is a vowel");
    }else if(letter == 'O' || letter == 'o'){
        printf("O is a vowel");
    }else if(letter == 'U' || letter == 'u'){
        printf("U is a vowel");
    }else{
        printf("%c is not a vowel",letter);
    }
    }

    if(0){
        printf("Using switch statements \n");
        switch(letter){
            case 'A':
            case 'a':
                printf("A is a vowel");
                break;
            case 'E':
            case 'e':
                printf("E is a vowel");
                break;
            case 'I':
            case 'i':
                printf("I is a vowel");
                break;
            case 'O':
            case 'o':
                printf("O is a vowel");
                break;
            case 'U':
            case 'u':
                printf("U is a vowel");
                break;
            default:
                printf("%c is not a vowel",letter);
        }
    }

}

