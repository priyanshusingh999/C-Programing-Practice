#include <stdio.h>

int main(){
    int celsius;
    printf("Enter Tumperature to Convert Celsius to Fahrenheit: ");
    scanf("%d", &celsius);

    printf("Fahrenheit: %d\n", (celsius * 1.8) + 32);
    return 0;
}