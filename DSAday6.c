# include <stdio.h>
int main() {
    int  A , B, C;
    printf("Enter the three Number :");  
    scanf("%d %d %d", &A , &B, &C); 
    if( A > B){
        if (A > C){
            printf("A is largest");
        }
        else{
            printf("C is largest");
        }
}
else { 
        if (B > C){
            printf("B is largest");
        }
        else{ 
            printf("C is largest");         
        }
    }    
return 0;
}
    
    
