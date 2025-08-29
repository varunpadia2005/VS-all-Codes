#include<stdio.h> 
    int main() {
        int a,i;
        printf("Enter the number");
        scanf("%d", &a);
        for(i=10;i>=1;i--){
        printf("%d",a);
        printf(" * ");
        printf("%d",i);
        printf(" = ");
        printf("%d",(a*i));
        printf("\n");
    }
}
