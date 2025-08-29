#include<stdio.h>
void factorial(int n,int f);

int main() {
    int n;
    int f=1;
    printf("Enter the number");
    scanf("%d", &n);
    factorial(n,f);
    return 0;
}
void factorial(int n, int f) {
    if(n==0) {
        printf("The factorial of the number is %d",f);
        return;
    }
    factorial(n-1,f*n);
}