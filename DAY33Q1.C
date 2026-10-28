
#include <stdio.h>

int main() {
    int a[100], n, i, target;
    int low, high, mid, found = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &target);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (a[mid] == target) {
            found = mid;
            break;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d", found);

    return 0;
}
