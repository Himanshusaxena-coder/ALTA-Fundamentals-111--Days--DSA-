#include <stdio.h>
#include <ctype.h>
int main(){
    char str[] ="Ha hau ahi ahie 1232344";
    int vow_=0,con_ =0,dig_ =0,sp_=0;
    for (int i =0;str[i]!= '\0';i++){
        char chr= tolower(str[i]);
        if (chr >='a'&&chr<='z'){
            if (chr == 'a'|| chr == 'e'||chr =='i'||chr=='o' ||chr== 'u')
                vow_++;
            else
                con_++;
        }
        else if (chr>='0' &&chr<='9')
            dig_++;
        else if (chr==' ')
            sp_++;
    }
    printf("Vowel = %d\nConsonant = %d\nDigit = %d\nSpace =  %d\n" ,vow_,con_,dig_,sp_);
    return 0;
}