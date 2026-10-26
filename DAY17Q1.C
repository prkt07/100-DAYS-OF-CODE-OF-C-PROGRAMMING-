
#include <stdio.h>

int main() {
    int n, temp, digit, count = 0;
    int i;
    long long sum = 0, power;

    scanf("%d", &n);

    if (n < 0) {
        printf("Not Armstrong");
        return 0;
    }

    temp = n;

    do {
        count++;
        temp = temp / 10;
    } while (temp > 0);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}
