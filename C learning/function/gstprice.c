#include<stdio.h>
void calculate(int p);

int main() {
    int p;
    printf("Enter the number");
    scanf("%d", &p);
    calculate(p);
}
void calculate(int p) {
    float fp;
    fp=p+(0.18*p);
    printf("The final price is %f",fp);
}