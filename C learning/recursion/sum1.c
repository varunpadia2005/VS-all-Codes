#include<stdio.h>
int sum(int a);
int main() {
    int a;
    printf("Enter the number till which we want the sum ");
    scanf("%d", &a);
    printf("The sum is %d",sum(a));
    return 0;
}
int sum(int a) {
    if(a==1) {
        return 1;
    }
    int snum=sum(a-1);
    int s=a+snum;
    return s;
}