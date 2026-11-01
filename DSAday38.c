#include <stdio.h>
int main(){
    int arr1[]={1,7,7,1};
    int arr2[]={7,7};
    int a=4,b = 2,search;
    printf("Intersection: ");
    for (int i=0;i<a;i++){
        for (int j=0;j< b;j++){
            if (arr1[i] ==arr2[j]){
                search = 0;
                for(int k=0;k < i;k++){
                    if (arr1[k]==arr1[i]){
                        search= 1;
                        break;
                    }
                }
                if (search==0){
                    printf("%d\n",arr1[i]);
                }
                break;
        }
        }
    }
    return 0;
}