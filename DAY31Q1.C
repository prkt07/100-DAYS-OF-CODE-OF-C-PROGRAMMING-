
#include <stdio.h>

int main() {
    int a[100], n, i, target, found = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            found = i;
            break;
        }
    }

    printf("%d", found);

    return 0;
}
