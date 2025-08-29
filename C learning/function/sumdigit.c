#include<stdio.h>
int sumdigit(int a);
int main() {
    int a;
    printf("Enter the number whse sum of digit you want");
    scanf("%d", &a);
    sumdigit(a);
    return 0;
}
int sumdigit(int a) {
    int s,i;
    s=0;
    for(i=a;i>0;i/10) {
        s=s+(i%10);
    }
    printf("The sum of the digits are %d",s);
}