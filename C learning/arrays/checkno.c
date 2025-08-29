#include<stdio.h>
int main() {
    int c=0,i,n,a;
    printf("Enter the no. of number we want to enter");
    scanf("%d",&n);
    printf("Enter the number we want to check");
    scanf("%d",&a);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]==a)
            c++ ;
    }
    printf("The total no.of time %d occured in the array is %d",a,c);
    return 0;
}