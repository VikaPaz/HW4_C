
#include <stdio.h>

void bin(int num) {
    if (num == 0) {
        printf("0");
        return 0;
    }

    int binary[32];
    int index = 0;
    int isNegative = 0;

    if (num < 0) {
        isNegative = 1;
        num = -num;
    }
    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    if (isNegative) {
        printf("-");
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    bin(num);

    return 0;
}

