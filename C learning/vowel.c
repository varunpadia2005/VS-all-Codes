#include<stdio.h>
int main() {
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("The entered character is a vowel.");
    else
        printf("The entered character is not a vowel.");
}