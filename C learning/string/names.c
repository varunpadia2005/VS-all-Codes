#include<stdio.h>
int main() {
    char name[100];
    int i,c,d;
    printf("Enter the first name \n");
    printf("Enter # after writting the name ");
    for(i=0;i<100;i++) {
        scanf("%c",&name[i]);
        if(name[i]=='#')
            break;
            d=i;
    }
    for(i=0;i<=d;i++) {
        printf("%c",name[i]);
    }
    return 0;
}