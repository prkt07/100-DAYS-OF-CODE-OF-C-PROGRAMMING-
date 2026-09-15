#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("Zero");
        else
            printf("Positive number");
    } else {
        printf("Negative number");
    }

    return 0;
}