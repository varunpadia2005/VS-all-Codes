#include<stdio.h>
int main() {
    int i,n,s;
    printf("Enter the number");
    scanf("%d", &n);
    i=s=0;
    do{
        s+=i;
        i++;
    }while(i<=n);
    printf("The sum of the numbers is ");
    printf("%d",s);
}