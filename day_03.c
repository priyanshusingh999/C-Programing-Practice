#include <stdio.h>

void main() {

    int marks;
    printf("Enter your percentage");
    scanf("%d", &marks);
    
    if(marks>33 && marks<=50)
    {
        printf("D Grade");
    }
    else if(marks>50 && marks<=70)
    {
        printf("c Grade");
    }
    else if(marks>70 && marks<=90)
    {
        printf("B Grade");
    }
    else if(marks>90 && marks<=100)
    {
        printf("A+ Grade");
    }
    else
    {
        printf("you are westing your time");
    }
}