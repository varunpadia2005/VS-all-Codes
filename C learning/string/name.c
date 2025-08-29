#include<stdio.h>
int main() {
    char fname[]={'v','a','r','u','n','\0'};
    char lname[]={'p','a','d','i','a','\0'};
    int i;
    for(i=0;i<5;i++) {
        printf("%c",fname[i]);
    }
    printf(" ");
    for(i=0;i<5;i++) {
        printf("%c",lname[i]);
    }
    return 0;
}