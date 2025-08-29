#include<stdio.h>
#include<math.h>

void power(int a, int b);

int main() {
    int a,b;
    printf("Enter the number and to the power which it has to be raised");
    scanf("%d %d", &a, &b);
    power(a,b);
}
void power(int a, int b) {
    int p;
    p=pow(a,b);
    printf("The answer is %d",p);
}