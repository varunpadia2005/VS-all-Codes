#include<stdio.h>
int main() {
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%2!=0 && a%3!=0)
        printf("Acceptable");
    else if(a%2==0 || a%3==0)
        printf("Unacceptable");
}