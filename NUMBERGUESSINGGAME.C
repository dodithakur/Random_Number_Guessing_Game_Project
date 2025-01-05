#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Initialise random number generator
    srand(time(0));
    // Generate random number between 1 to 100)
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    { // since we want it to run atleast once
        printf("guess the number : ");
        scanf("%d", &guessed);
        if(guessed>randomNumber) printf("lower number please\n");
        else if(guessed<randomNumber) printf("higher number please\n");
        else printf(" congrats !! \n");
        no_of_guesses++;
    } while (guessed != randomNumber);
    
    printf("you guessed the number in %d guesses ", no_of_guesses);
    return 0;
}