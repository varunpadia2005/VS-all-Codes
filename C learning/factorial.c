#include<stdio.h>
int main() {
    int i,a,f;
    f=1;
    printf("Enter the number");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        f*=i;
    }
    printf("The factorial of the number given by you is ");
    printf("%d",f);
    return 0;
}