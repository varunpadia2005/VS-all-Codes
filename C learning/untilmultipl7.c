#include<stdio.h>
int main() {
    int i,a;
    for(i=0;i>=0;i++) {
        printf("Enter the number");
        scanf("%d", &a);
        if(a%7==0){
            printf("You entered a number which is multiple of 7");
            break;
        }
        printf("%d",a);
    }
}