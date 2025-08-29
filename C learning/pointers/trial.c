#include<stdio.h>
void square(int i);
void _square(int *i);
int main() {
    int i= 5;
    square(i);
    printf("number = %d \n",i);

    _square(&i);
    printf("number = %d \n",i);
    return 0;
}
void square(int i) {
    i=i*i;
    printf("Square = %d \n",i);
}
void _square(int *i) {
    *i=(*i)*(*i);
    printf("Square = %d \n",*i);
}