#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game_start();

int main()
{
    // Initialize random number generator
    srand(time(0));
    game_start();

    char replay;
    printf("Do you want to Restart the game? Type (y) for Yes or (n) for No\n");
    scanf(" %c", &replay);
    while (replay == 'y' || replay == 'Y')
    {
        game_start();
        printf("Do you want to Restart the game? Type (y) for Yes or (n) for No\n");
        scanf(" %c", &replay);
    }

    return 0;
}

void game_start()
{
    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_Guess = 0, Not_Guessed = 1, numb;
    printf("I Have Generated a number between 1 to 100 Can You Guess the number\n");
    scanf("%d", &numb);
    while (Not_Guessed)
    {
        if (numb >= 1 && numb <= 100)
        {
            number_of_Guess++;
            if (randomNumber < numb)
            {
                printf("My number is Smaller then Yours\n");
                scanf("%d", &numb);
            }
            else if (randomNumber > numb)
            {
                printf("My Number is Greater Then Yours\n");
                scanf("%d", &numb);
            }
            else
            {
                printf("Victory! You Guessed it Right the number is %d You Took %d guesses to guess it Right \n\n", randomNumber, number_of_Guess);
                Not_Guessed = 0;
            }
        }
        else
        {
            printf("Please Enter a number between 1 to 100\n");
            scanf("%d", &numb);
        }
    }
}