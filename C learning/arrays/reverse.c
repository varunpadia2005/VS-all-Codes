#include<stdio.h>
int main() {
    int g1,g2,i,n;
    printf("Enter the no. of number we want to enter");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        printf("Enter the numbers ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++) {
        g1=arr[i];
        g2=arr[n-i-1];
        arr[n-i-1]=g1;
        arr[i]=g2;
    }
    for(i=0;i<n;i++)
        printf("%d \t",arr[i]);
        return 0;
}