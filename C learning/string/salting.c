#include<stdio.h>
#include<string.h>
int main() {
    char p[20];
    char salt[]="123";
    char newp[30];
    int i;
    printf("Enter the password");
    scanf("%s",&p);
    strcpy(newp, p);
    strcat(newp, salt);
    puts(newp);
}