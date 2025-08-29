#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the two number ");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a<b){
        printf("%d", a );
        printf(" is the smallest number");
    }
    else{
        printf("%d", b );
        printf(" is the smallest number");
    }
}