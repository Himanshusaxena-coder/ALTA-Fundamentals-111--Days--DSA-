#include <stdio.h>
#include <string.h>
int main(){
    char str[]="hello";
    int n =strlen(str);
    char temp;
    for(int i =0;i <n/2;i++){
        temp =str[i];
        str[i] =str[n -1-i];
        str[n-1-i] =temp;
    }
    printf("%s", str);
    printf("\n");
    return 0;
}