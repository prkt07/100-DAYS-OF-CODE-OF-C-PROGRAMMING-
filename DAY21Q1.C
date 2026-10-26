
#include <stdio.h>

int main() {
    int n, temp, first, last, digits = 0;
    int power = 1, middle, result;

    scanf("%d", &n);

    if (n < 10) {
        printf("%d", n);
        return 0;
    }

    temp = n;
    last = n % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for (int i = 1; i <= digits; i++) {
        power = power * 10;
    }

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
