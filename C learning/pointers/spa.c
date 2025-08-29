#include<stdio.h>
void spa(int a, int b, int *s, int *p, int*av);
int main() {
    int a=5,b=10,s,p,av;
    spa(a,b,&s,&p,&av);
    printf("Sum is %d \n",s);
    printf("Product is %d \n",p);
    printf("Average is %d \n",av);
    return 0;
}
void spa(int a, int b, int *s, int *p, int*av) {
    *s=(a)+(b);
    *p=(a)*(b);
    *av=(a+b)/2;  
}
