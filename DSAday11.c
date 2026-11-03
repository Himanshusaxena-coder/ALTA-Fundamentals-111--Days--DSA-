#include <stdio.h>
int main(){
    int Number1, Number2;
    char Operator;
    printf("Enter the Number1 : ");
    scanf("%d", &Number1);
    printf("Enter the Number2 : ");
    scanf("%d", &Number2);
    printf("Enter the Operator : ");
    scanf(" %c", &Operator);

    switch (Operator)
    {
    case '+':
        printf("Your answer is  = %d\n", Number1 + Number2);
        break;
    case '-':
        printf("Your answer is  = %d\n",Number1 - Number2);
        break;
    case '*':
        printf("Your answer is = %d\n", Number1 * Number2);
        break;
    case '/':
        printf("Your answer is  = %d\n",Number1 / Number2);
        break;
    
    default:
    printf("Invalid Data");
        break;
    }
return 0;
}