#include<stdio.h>
float temp(float temp);
int main() {
    float t;
    printf("Enetr the temperature in celsius");
    scanf("%f",&t);
    temp(t);
}
float temp(float temp) {
    if(temp<45.0)
        printf("It is Cold");
    else
        printf("It is Hot");
}