#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[]="Madam";
    int i=0,j=strlen(str)- 1;
    while (i<j){
        if (tolower(str[i])!=tolower(str[j])){
            printf("false\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("true\n");
    return 0;
}