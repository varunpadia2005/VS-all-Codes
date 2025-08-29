#include<stdio.h>
int main(){
    int i,max,min;
    int arr[];
    printf("Enter the no of elements of array");
    scanf("%d",&n);
    printf("Enter the list of number");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i]){
            max=arr[i-1];
            min=arr[i];
        }
        else{
            max=arr[i];
            min=arr[i-1];
        }
    }
    printf("max is %d\n min is %d",max,min);
    return 0;
}