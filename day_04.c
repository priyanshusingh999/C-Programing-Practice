#include <stdio.h>

void main() {
    // Given the unit generate your electricity bill
    int unit;
    printf("How much unit use");
    scanf("%d", &unit);
    
    if(unit>0 && unit<=50)
    {
        printf("Your Bill", unit*5);
    }
    else if(unit>50 && unit<=100)
    {
        printf("Your Bill %d", unit*6);
    }
    else if(unit>100 && unit<=200)
    {
        printf("Your Bill %d", unit*8);
    }
    else if(unit>200)
    {
        printf("Your Bill %d", unit*10);
    }
    else
    {
        printf("you are westing your time");
    }
}