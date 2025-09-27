#include <stdio.h>

int main(){
    int num;
    printf("The Area of Circle with radius: ");
    scanf("%d", &num);

    int area = 3.14 * num * num;
    printf("Area of Circle: %d", area);
    return 0;
}