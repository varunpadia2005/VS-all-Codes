#include<stdio.h>
void printhw(int a);

int main() {
    int a;
    printf("Enter the number of time you want to print");
    scanf("%d", &a);
    printhw(a);
    return 0; 
}
void printhw(int a) {
    if(a==0) {
        return;
    }
    printf("Hello World \n");
    printhw(a-1);
}