#include <stdio.h>

int main() {
    int num, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        rem = num % 10;          // get last digit
        sum = sum + (rem * rem * rem);  // cube and add
        num = num / 10;          // remove last digit
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}