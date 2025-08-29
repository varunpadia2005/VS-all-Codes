#include<stdio.h>
int main() {
    int a,b,c,max;
    printf("Enter the three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c) 
    {
        max=a;
    }
    else if(b>c && b>a) 
    {
        max=b;
    }
    else 
    {
        max=c;
    }
    printf("The max of the three number is %d \n",max);
}