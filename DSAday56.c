#include <stdio.h>
int main(){
    int arr[4],target;
    for(int i =0;i<4; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i =0;i<4;i++){
        if(arr[i]==target){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}