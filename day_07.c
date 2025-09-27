#include <stdio.h>

// write a program to check the number is prime or not

int main(){
    int num, check=0, i=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        if(num%i==0){
            check++;
        }
    }
    if(check==2){
        printf("%d is a prime number\n", num);
    }
    else{
        printf("%d is not a prime number\n", num);
    }
    return 0;
}