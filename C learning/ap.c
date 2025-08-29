#include<stdio.h>
int main(){
    int a,d,n,i;
    printf("Enter the first term");
    scanf("%d",&a);
    printf("Enter the no. of term");
    scanf("%d",&n);
    printf("Enter the comman difference");
    scanf("%d",&d);
    printf("%d",a);
    for(i=a;i<(d*n);i+=n)
        printf("%d",a+d);
    return 0;
}