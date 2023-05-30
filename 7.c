#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num;
    int zeros = 0, positives = 0, negatives = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num == 0) {
            zeros++;
        } else if (num > 0) {
            positives++;
        } else {
            negatives++;
        }
    }
    printf("%d %d %d\n", zeros, positives, negatives);
    return 0;
}