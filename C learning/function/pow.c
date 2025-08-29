#include<stdio.h>
float power(float a, float b);
int main() {
    float p,a,b;
    printf("Enter the value of base and power to it");
    scanf("%f%f",&a,&b);
    power(a,b);
}
float power(float a, float b) {
    float p;
    p=pow(a,b);
    printf("The power is %f",p);
}