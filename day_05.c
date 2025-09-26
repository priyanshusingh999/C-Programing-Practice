#include <stdio.h>

int main(){
    int i=1,num,ans;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (i<=10)
    {
        ans=num*i;
        printf("%d x %d = %d\n", num,i,ans);
        i++;
    }
    
    return 0;
}