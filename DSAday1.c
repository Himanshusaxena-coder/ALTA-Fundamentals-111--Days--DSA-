#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);
    int years = days / 365;
    int remainingDays = days % 365;
    printf("%d years, %d days\n", years, remainingDays);
    return 0;
}