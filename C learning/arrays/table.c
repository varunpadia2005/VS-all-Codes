#include<stdio.h>
int main() {
    int i,j;
    int arr[2][10];
    for(j=0;j<2;j++) {
        for(i=0;i<10;i++) {
            arr[j][i]=(j+2)*(i+1);
        }
    }
    for(j=0;j<2;j++) {
        for(i=0;i<10;i++) {
            printf("%d * %d = %d \n",j+2,i+1,arr[j][i]);
        }
    }
    return 0;
}