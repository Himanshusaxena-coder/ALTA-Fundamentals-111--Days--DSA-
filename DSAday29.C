#include <stdio.h>
#include<math.h>
struct point{
    int X,Y;
};
float distance(struct point p1,struct point p2){
    return sqrt((p2.X-p1.X)*(p2.X-p1.X)+(p2.Y-p1.Y)*(p2.Y-p1.Y));
}
int main(){
    struct point p1={0,0};
    struct point p2={3,4};
    printf("%.0f",distance(p1,p2));
    printf("\n");
    return 0;
}

