#include <stdio.h>
typedef struct Node{
    int value;
    struct Node *next;
}Node;
int main(){
    Node n1, n2;
    n1.value = 10;
    n2.value = 20;
    n1.next = &n2;
    n2.next = NULL;
    printf("%d %d", n1.value, n1.next->value);
    printf("\n");
    return 0;
}