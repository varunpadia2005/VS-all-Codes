#include<stdio.h>
float temp(float c);
int main() {
    float f,c;
    printf("Enter the temperature in celsius ");
    scanf("%f", &c);
    temp(c);
    return 0;
}
float temp(float c) {
    float f;
    f=((1.8*c)+32);
    printf("%f",f);
}