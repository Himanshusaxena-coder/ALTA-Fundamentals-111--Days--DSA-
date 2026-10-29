#include <stdio.h>
int main(){
    int Year;
    printf("Enter a Year:");
    scanf("%d", &Year);
    
    if (Year % 400 == 0) {
        printf("Leap Year");
        }                         
    else if (Year % 100 == 0){
        printf("Not Leap year");
        }
    else if( Year % 4 == 0){
        printf("Leap Year");
        }
    else{
        printf("Not Leap Year");
    }
    return 0;
}
