# include <stdio.h>
int main (){
    int  Number, Palindrome = 0 , Value, Real;
    printf("Enter the Number = ");
    scanf("%d", &Number);
    Real =Number;
    while(Number> 0){
        Value = Number %10;
        Palindrome= Palindrome*10+Value;
        Number =Number/10;
    }
    if ( Real == Palindrome){
        printf("%s\n","Palindrome");

    }else{
        printf("%s\n","Not Palindrome");
    }
    return 0;
} 