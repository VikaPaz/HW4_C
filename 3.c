
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checkPassword(const char *password) {
    int len = strlen(password);
    if (len < 8 || len > 14) {
        return false;
    }
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasOther = false;
    for (int i = 0; i < len; i++) {
        char ch = password[i];

        if (ch >= 33 && ch <= 126) {
            if (ch >= 'A' && ch <= 'Z') {
                hasUpper = true;
            } else if (ch >= 'a' && ch <= 'z') {
                hasLower = true;
            } else if (ch >= '0' && ch <= '9') {
                hasDigit = true;
            } else {
                hasOther = true;
            }
        } else {
            return false; // Недопустимый символ
        }
    }
    int classesCount = hasUpper + hasLower + hasDigit + hasOther;
    return classesCount >= 3;
}

int main() {
    char password[15];
    scanf("%s", password);

    if (checkPassword(password)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

