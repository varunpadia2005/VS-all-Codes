#include<stdio.h>
int main() {
    int fc=0,i,n;
    printf("Enter the no. of product");
    scanf("%d",&n);
    int price[n],gst[n];
    for(i=0;i<n;i++) {
        printf("Enter the price of the product ");
        scanf("%d",&price[i]);
        printf("Enter the GST of the product ");
        scanf("%d",&gst[i]);
        fc=fc+(price[i]+(price[i]*gst[i]/100));
    }
    printf("The total bill is %d",fc);
}