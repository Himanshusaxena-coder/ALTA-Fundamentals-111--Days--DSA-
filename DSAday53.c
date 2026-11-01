#include <stdio.h>
#include <string.h>
int check(char s[], int l, int r){
    if(l>=r)
        return 1;
    if(s[l]!=s[r])
        return 0;
    return check(s,l+1,r-1);
}
int main(){

    char s[30];
    printf("Enter the String : ");
    scanf("%s",s);
    int n = strlen(s);
    printf("%s",check(s ,0,n-1) ? "True\n" : "False\n");
    return 0;
}