#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    char newstr[100]="";
    int i,j,n,m;
    printf("Enter the string");
    scanf("%s",&str);
    printf("Enter the starting and the ending index ");
    scanf("%d%d",&n,&m);
    for(i=n,j=0;i<=m,j<m-n+1;i++,j++){
        newstr[j]=str[i];
    }
    puts(newstr);
}