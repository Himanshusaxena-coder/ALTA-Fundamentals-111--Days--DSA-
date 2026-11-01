# include <stdio.h>
int main (){
    int Season ;
    printf("Enter Month : ");
    scanf("%d", &Season);
    switch (Season)
    {
    case 12: case 1: case 2:
        printf("%s\n", "winter"); 
        break;
    case 3: case 4: case 5:
        printf("%s\n", "Summer"); 
        break;
    
    case 6: case 7: case 8:
        printf("%s\n", "Monsoon"); 
        break;
    case 9: case 10: case 11:
        printf("%s\n", "Autumn"); 
        break;
    default:
    printf("%s\n", "Invalid Season");
        break;
    }
    return 0;
}