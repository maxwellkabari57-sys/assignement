/*2.	Write a C program that implements a number guessing game. The computer should generate a random number in the range 1 to 20 (inclusive). The program should repeatedly prompt the player to enter a guess and then respond with one of the following messages: 
o	"Too high!" if the guess is greater than the secret number. 
o	"Too low!" if the guess is less than the secret number. 
o	"Congratulations!" if the guess is equal to the secret number. 
The program must also count and display the total number of attempts it took for the player to guess correctly. 
*/
//AURTHOR: MAXWELL KABARI
//ADMN : BCS-05-0073/2026
//DATE : 10/6/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret_number, guess = 0, attempts = 0;

    srand(time(NULL));
    secret_number = (rand() % 20) + 1;

    while (guess != secret_number)
    {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret_number)
        {
            printf("Too high!\n");
        }
        else if (guess < secret_number)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Congratulations!\n");
            printf("Total attempts: %d\n", attempts);
        }
    }

    return 0;
}











