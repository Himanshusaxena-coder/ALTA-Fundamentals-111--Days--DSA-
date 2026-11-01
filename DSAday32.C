#include <stdio.h>
int main() {
    int A[]={12,35,1,10,34,1},Num=6;
    int maximum= A[0], second= -1;
    for(int i =1;i <Num;i++){
        if(A[i] >maximum) {
            second=maximum;
            maximum =A[i];
        }
        else if(A[i] >second &&A[i]!= maximum)
            second =A[i];
    }
    printf("%d", second);
    printf("\n");
    return 0;
}