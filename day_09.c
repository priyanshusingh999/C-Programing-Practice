#include <stdio.h>

int main(){

    int facebook = 1234, current=1234, newpassword=111, conform=111;

    if(current==facebook){

        if(newpassword!=current){

            if(newpassword==conform){

                facebook=newpassword;
                
                printf("Your password has been changed successfully!");
            }
            else{
                printf("New password and Conform should be same!");
            }
        }
        else{
            printf("New password should not be same as current password!");
        }
    }
    else{
        printf("Current password is wrong!");
    }

    return 0;
}