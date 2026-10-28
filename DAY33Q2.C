
#include <stdio.h>

int main() {
    int a[101], n, i, x, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    pos = n;

    while (pos > 0 && a[pos - 1] > x) {
        a[pos] = a[pos - 1];
        pos--;
    }

    a[pos] = x;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
