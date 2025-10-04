#include <stdio.h>

// Function to demonstrate 2D array of characters and integers
void string_array(){
    char str[2][2] = {{'a', 'b'}, {'c', 'd'}};
    printf("2D array character of first string: %c\n2D array character of second string: %c\n", str[0][0], str[1][1]);
}

// Function to demonstrate 3D array of characters and integers
void str_array() {
    char str[3][3][3] = {{ {'a', 'b', 'c'} }, { {'e', 'f', 'g'} }, { {'i', 'j', 'l'} }};

    printf("3D array First character of first array: %c\n", str[0][0][0]);
    printf("3D array Second character of second array: %c\n", str[1][0][0]);
    printf("3D array Third character of third array: %c\n", str[2][0][0]);
}

int main(){
    string_array();
    str_array();
    return 0;
}