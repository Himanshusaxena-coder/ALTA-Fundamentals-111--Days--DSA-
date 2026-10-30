# include <stdio.h>
int main (){
int  Number ;
printf("Enter the Number:");
scanf("%d", &Number) ;
if ( Number % 3 == 0 && Number % 5 == 0){
    printf("YES\n");
}else
    printf("NO\n");
return 0;
}