#include<stdio.h>
#include<math.h>
int main() {
    int i,j,rs,re,p;
    printf("Enter the range strat and end number ");
    scanf("%d", &rs);
    scanf("%d", &re);
    for(i=rs;i<=re;i++){
        p=0;
        for(j=1;j<=i;j++){
            if(i%j==0) {
                p++;
            }
        }
        if(p==2){
            printf("%d",i);
            printf(" is a prime number");
        }
        else {
            printf("%d",i);
            printf(" is not a prime number");
        }
        printf("\n");
    }
}