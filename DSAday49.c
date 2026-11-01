#include <stdio.h>
void printNumbers(int i, int n) {
    if (i>n){
        return;
    }printf("%d ",i);
    printNumbers(i +1, n);
}
int main(){
    int n =5;
    printNumbers(1, n);
    printf("\n");
    return 0;
} 