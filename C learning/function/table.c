#include<stdio.h>
void number(int a);

int main() {
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    number(a);
    return 0;
}
void number(int a) { 
    for(int i=1;i<=10;i++){
        printf("%d \n",(i*a));
    }
}