#include <stdio.h>

// write a program to check the number is prime or not

int main(){
    int num;
    printf("Enter a number to check prime or not: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("%d is not a prime number", num);
    } else {
        printf("%d is a prime number", num);
    }
    
    return 0;
}