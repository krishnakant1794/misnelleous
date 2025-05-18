#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, no_of_guesses = 0, guess_no;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    // printf("Random number between 1 and 100: %d\n", randomNumber);
    printf("Welcome to the Number Guessing Game!\n");

    do {
        printf("\nGuess a number between 1 and 100: ");
        scanf("%d", &guess_no);
        no_of_guesses++;

        if (guess_no < randomNumber) {
            printf("Too low! Try guessing a higher number.\n");
        } else if (guess_no > randomNumber) {
            printf("Too high! Try guessing a lower number.\n");
        } else {
            printf("🎉 Congratulations! You guessed the right number!\n");
        }

    } while (guess_no != randomNumber);

    printf("You guessed the number in %d attempts.\n", no_of_guesses);

    return 0;
}
