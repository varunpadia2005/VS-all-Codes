#include<stdio.h>
int main() {
    int i,n,a;
    int new=0;
    printf("Enter the number whose digits we want to reverse \n");
    scanf("%d",&n);
    a=n;
    for(i=a;i>0;i=i/10) {
        new=(new*10)+(i%10);
    }
    printf("%d",new); 
    return 0;
}