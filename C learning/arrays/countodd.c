#include<stdio.h>
int main() {
    int c=0,i,n;
    printf("Enter the no. of number we want to enter");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        printf("Enter the numbers ");
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
            c++ ;
    }
    printf("The total odd number is %d",c);
}