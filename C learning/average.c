#include<stdio.h>
#include<math.h>

int main() {
    int x,y,z;
    printf("Enter the three number");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("The average is ");
    printf("%d",((x+y+z)/3));
    return 0;
}