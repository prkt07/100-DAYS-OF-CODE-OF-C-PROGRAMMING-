
#include <stdio.h>

int main() {
    int a, b, i, lcm;

    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0) {
        printf("0");
        return 0;
    }

    if (a > b) {
        i = a;
    } else {
        i = b;
    }

    lcm = i;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    printf("%d", lcm);

    return 0;
}
