#include<stdio.h>
#include<string.h>
int main() {
    char str[200],ch;
    int i,len;
    printf("Enter the string");
    scanf("%s%c",&str,&ch);
    len=strlen(str);
    for(i=0;i<len;i++) {
        if(str[i]==ch)
            printf("Character found at %d index",i);
    }
    return 0;
}