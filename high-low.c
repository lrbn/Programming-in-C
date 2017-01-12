/**
* The High-Low Game is a game where one player thinks of a number, 
* in this case 1 to 100, and then the other player tries to guess 
* the number by asking repeatedly if the number is larger than certain number. 
*/
#include <stdio.h>
int main(int argc, char** argv) {
    printf("Welcome to the High Low game...\n");
    
    int low = 1;
    int high = 100;
    int mid = (low + high) / 2;
    char input;
    char answer;
    
    do {
        printf("Think of a number between 1 and 100 and press <enter>\n");
        
        while (!(high < low)) {
        printf("Is it higher than %d? (y/n)\n", mid);
        scanf(" %c", &input);
        getchar();
        
        if (input == 'y') {
            low = mid + 1;
            mid = (low + high) / 2;
        } else if (input == 'n') {
            high = mid - 1;
            mid = (low + high) / 2;
        } else {
            printf("Type y or n\n");
        }
        }
            printf(">>>>>> The number is %d\n\n", low);
            printf("Do you want to continue playing (y/n)?");
            scanf(" %c", &answer);
            getchar();
            low = 1;
            high = 100;
            mid = (low + high) / 2;
        
        
    } while (answer != 'n');
    
    printf("Thank you for playing!!!\n");

}
