#include<stdio.h>
int main() {
    int n,i;
    printf("Enter the no. of number we want to enter ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number we want to inseart at end ");
    scanf("%d",&arr[n]);
    for(i=0;i<=n;i++) {
        printf("%d \t",arr[i]);
    }
    return 0;
}