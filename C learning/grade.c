#include<stdio.h>
int main() {
    int m;
    printf("Enter the marks obtained ");
    scanf("%d", &m);
    if(m>=90 && m<=100){
        printf("A+");
    }
    else if(m>=70 && m<90){
        printf("A");
    }
    else if(m>=30 && m<70){
        printf("B");
    }
    else if(m<30){
        printf("C");
    }
    else{
        printf("Invalid marks");
    }
}