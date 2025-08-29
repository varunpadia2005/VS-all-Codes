#include<stdio.h>
int main() {
    int i,a;
    for(i=0;i>=0;i++) {
        printf("Enter the number");
        scanf("%d", &a);
        if(a%2!=0){
            printf("You entered an odd number");
            break;
        }
        printf("%d",a);
    }
}