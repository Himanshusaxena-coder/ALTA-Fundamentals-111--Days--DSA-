# include <stdio.h>
int main (){
    int  Actual_Price , Discount , Tax ,  Final_Price ;  

    printf("Enter the Actula_Price: ");
    scanf("%d", &Actual_Price);

    printf("Enter the Discount Percentage : ");
    scanf("%d", &Discount);

    printf("Enter the Tax Percentage :");
    scanf("%d", &Tax);

    Actual_Price = Actual_Price - (Actual_Price * Discount /100);
    Final_Price = Actual_Price + (Actual_Price * Tax /100);
    
    printf("Final_Price = %d\n", Final_Price);
    return 0 ;
} 
   