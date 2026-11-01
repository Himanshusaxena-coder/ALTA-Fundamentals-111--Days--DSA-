#include <stdio.h>
int main(){
    int Day, Month, Year , MaxDay;
    printf("Enter Day  Month  Year:");
    scanf("%d %d %d", &Day, &Month, &Year);
    if (Month == 1 || Month == 3 || Month ==5 || Month== 7|| Month == 8|| Month==10|| Month== 12){
        MaxDay = 31;
    }
    else if(Month == 4 || Month== 6||Month==9 || Month==11) {
        MaxDay =30;
    }   
    else if (Month==2){
    if (Year % 400 ==0|| (Year%4 == 0 && Year %100 != 0)){
            MaxDay =29;
    }
    else {
        MaxDay =28;
    }
    }else{
        printf("Invalid Date\n");   
        return 0;  
    } 
    if (Day >= 1 && Day <= MaxDay){
        printf("Valid Date\n");
    }
    else{
        printf("Invalid Date\n");
    }
    return 0;
}