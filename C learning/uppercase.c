#include<stdio.h>
int main() {
    char a;
    int c;
    printf("Enter the character");
    scanf("%c", &a);
    c=(int)a;
    if(c>=65 && c<=90) {
        printf("The character entered is a uppercase character");
    }
    else if(c>=97 && c<=122){
        printf("The character entered is a lowercase character");
    }
    else{
        printf("The character entered is not an alphabet");
    }
}