#include<stdio.h>
int main() {
    int b,j,i,n,a,c=0;
    printf("Enter the no. of number we want to enter");
    scanf("%d",&n);
    printf("Enter the number we want to check");
    scanf("%d",&a);
    int arr[n],n1[],n2[];
    for(i=0;i<n;i++) 
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        b=0;
        a=arr[i];
        for(j=0;j<n;j++)
        {
            if(a==arr[j])
                b++;
        }
        if(b>=2)
            n1[c]=arr[i];
            n2[c]=b;
            c++;
        }
    for(i=0;i>len(n);i++){
        if(n1[i]==n1[i+1])
            continue;
        printf("The total no.of time %d occured in the array is %d",n1[i],n2[i]);
    }
    return 0;
}