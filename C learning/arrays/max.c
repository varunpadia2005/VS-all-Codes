#include<stdio.h>
int main() {
    int a,n,i,m=0;
    printf("Enter the no. of number we want to enter ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        printf("Enter the no.");
        scanf("%d",&a);
        arr[i]=a;
    }
    for(i=0;i<n;i++) {
        if(arr[i]>m)
            m=arr[i];
    }
    printf("the max no. in the array is %d",m);
    return 0;
}