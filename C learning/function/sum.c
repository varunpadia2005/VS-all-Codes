#include<stdio.h>
int sum(int a, int b);
int main() {
    int a,b,c;
    printf("Enter the two number");
    scanf("%d %d", &a, &b);
    c=sum(a,b);
    printf("The sum is %d",c);
}
int sum(int a, int b) {
    int c;
    c=a+b;
    return c;
}