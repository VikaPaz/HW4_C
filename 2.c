
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int j = 1; j < n; j++) {
    printf("   ");
    }

    // Выводим дни месяца
    int day = 1;
    for (int i = 1; i <= k; i++) {
        printf("%2d ", day);
        day++;
        if ((n + i - 1) % 7 == 0) {
            printf("\n");
        }
    }
    return 0;
}

