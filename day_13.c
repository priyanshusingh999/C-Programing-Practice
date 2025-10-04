#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int len = sizeof(array) / sizeof(array[0]);
    printf("Size of array: %d\n", len);

    for (int i = 0; i < len; i++) {
        printf("Element %d: %d\n", i, array[i]);
    }

    char str[] = "Hello, World!";
    int length = sizeof(str) / sizeof(str[0]);
    printf("String: %s\n", str);

    for (int i = 0; i < length; i++) {
        printf("Element %d: %c\n", i, str[i]);
    }

    return 0;
}
