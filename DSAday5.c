# include <stdio.h>
int main(){
    int Amount , Balance = 5000 ;

    printf("Enter the Amount:");

    scanf("%d" , &Amount);

    printf("%d\n",  Amount > 0 && Amount <= Balance);
// True -- 1
// False -- 0

return 0;
}