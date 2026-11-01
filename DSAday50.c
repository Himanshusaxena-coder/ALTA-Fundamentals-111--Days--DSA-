#include <stdio.h>
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Factorial = %d\n", factorial(N));
    return 0;
}