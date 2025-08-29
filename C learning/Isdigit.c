#include<stdio.h>

int main() {
    char a;
    int p;
    printf("Enter the character");
    scanf("%c", &a);
    p=(int)a;
    if(p>=48 && p<=57){
        printf("The character is a digit");
    }
    else{
        printf("The character is not a digit");
    }
    }