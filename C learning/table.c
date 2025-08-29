#include<stdio.h>
int main() {
    int i,a;
    printf("Enter the number whose table you want ");
    scanf("%d", &a);
    for(i=1;i<=10;i++){
        printf("%d",a);
        printf(" * ");
        printf("%d",i);
        printf(" = ");
        printf("%d",(a*i));
        printf("\n");
    }
}
