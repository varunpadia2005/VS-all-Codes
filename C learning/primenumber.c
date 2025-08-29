#include<stdio.h>
int main() {
    int i,a;
    int p=0;
    printf("Enter the number ");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            p++;
        }
    }
    if(p==2){
        printf("It is a prime number");
    }
    else{
        printf("It is not a prime number");
    }
}