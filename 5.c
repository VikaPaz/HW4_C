
#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
        count++;
    }
    if (count > 0) {
        float average = (float) sum / count;
        printf("%f", average);
    }
    return 0;
}


