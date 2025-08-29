#include<stdio.h>
int main() {
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if(a>=0) {
        printf("The number entered is a natural number");
    }
    else {
        printf("The number entered is not a natural number");
    }
}