#include<stdio.h>
void sum(int a,int s);
int main() {
    int a;
    int s=0;
    printf("Enter the number till which we want the sum");
    scanf("%d", &a);
    sum(a,s);
    return 0;
}
int s=0;
void sum(int a,int s) {
    if(a==0) {
        printf("The sum is first n natural numbers %d", s);
        return;
    }
    sum(a-1,s+a);
}