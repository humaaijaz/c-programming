#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of the digits is: %d.", sum);

    return 0;
}
