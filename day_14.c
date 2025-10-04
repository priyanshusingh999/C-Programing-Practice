#include <stdio.h>

void string_array(){
    char str[] = "Hello, World!";
    int length = sizeof(str) / sizeof(str[0]);
    printf("Size of String array: %d\n", length);

    // for (int i = 0; i < length; i++) {
    //     printf("Element %d: %c\n", i, str[i]);
    // }
}

void int_array(){
    int array[] = {1, 2, 3, 4, 5};
    int len = sizeof(array) / sizeof(array[0]);
    printf("Size of int array: %d\n", len);

    // for (int i = 0; i < len; i++) {
    //     printf("Element %d: %d\n", i, array[i]);
    // }
}

void float_array(){
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Size of float array: %d\n", length);

    // for (int i = 0; i < length; i++) {
    //     printf("Element %d: %.1f\n", i, arr[i]);
    // }
}

int main(){

    string_array(); // call the string_array function

    int_array();  // call the int_array function

    float_array(); // call the float_array function

    return 0;
}