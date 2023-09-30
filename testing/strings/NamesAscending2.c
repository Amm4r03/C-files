#include <stdio.h>

#define TOTAL_NAMES 3
#define MAX_NAME_LENGTH 50

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void swapStrings(char str1[], char str2[]) {
    char temp[MAX_NAME_LENGTH];
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        temp[i] = str1[i];
    }
    temp[i] = '\0';

    for (i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
    }
    str1[i] = '\0';

    for (i = 0; temp[i] != '\0'; i++) {
        str2[i] = temp[i];
    }
    str2[i] = '\0';
}

int main() {
    char Name[TOTAL_NAMES][MAX_NAME_LENGTH];

    for (int i = 0; i < TOTAL_NAMES; i++) {
        printf("Enter your name: ");
        scanf("%s", Name[i]);
        while (getchar() != '\n');
    }

    // Bubble sort based on string length
    for (int i = 0; i < TOTAL_NAMES - 1; i++) {
        for (int j = 0; j < TOTAL_NAMES - i - 1; j++) {
            if (stringLength(Name[j]) > stringLength(Name[j + 1])) {
                swapStrings(Name[j], Name[j + 1]);
            }
        }
    }

    // Print the sorted names
    printf("Sorted names by length:\n");
    for (int i = 0; i < TOTAL_NAMES; i++) {
        printf("%s\n", Name[i]);
    }

    return 0;
}
