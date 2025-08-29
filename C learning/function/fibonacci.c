#include<stdio.h>
int fibonacci(int n);

int main() {
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    fibonacci(n);
}
int fibonacci(int n) {
    int a,b,c,i;
    a=0;
    b=1;
    printf("0 \n");
    printf("1\n");
    for(i=1;i<(n-1);i++) {
        c=a+b;
        a=b;
        b=c;
        printf("%d \n",c);
    }
}