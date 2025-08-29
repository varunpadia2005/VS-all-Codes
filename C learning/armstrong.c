#include<stdio.h>

int main() {
    int a,i,p;
    int s=0;
    printf("Enter the number ");
    scanf("%d", &a);
    i=a;
    for ( i = a; i > 0; i=i/10)
    {
        p=i%10;
        s+=(p*p*p);
    }
    if(s==a) {
        printf("The number is an armstrong number");
    }
    else{
        printf("The number is not an armstrong number");
    }
}