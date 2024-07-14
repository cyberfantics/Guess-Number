#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int computer_guess = rand() % 100 + 1;
    system("CLS");
    int user_guess;
    int tries = 6;
    while (tries != 0)
    {
        printf("Guess a number b/w 0/100 \n");
        scanf("%d", &user_guess);

        if (user_guess == computer_guess)
        {
            printf("You Win!!! and %d lifes remaining \n", tries);
            tries = 0;
        }
        else if (computer_guess != user_guess && tries <= 1)
        {
            printf("You lose,You have no life more\nThe choice of computer is %d\n", computer_guess);
            tries = 0;
        }
        else if (user_guess < computer_guess && tries > 1)
        {
            tries--;
            printf("Too low!!!You have %d lifes remaining \n", tries);
        }

        else if (computer_guess < user_guess && tries > 1)
        {
            tries--;
            printf("Too high!!!You have %d lifes remaining \n", tries);
        }
    }
}