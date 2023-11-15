#include <stdio.h>

int main() {
    int n, i, num;
    int max = -2147483648; // minimum value of int

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The maximum of the %d integers is %d.", n, max);

    return 0;
}
