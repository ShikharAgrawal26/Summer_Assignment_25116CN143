#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int secret, guess, attempts = 0;
    srand(time(NULL));
    secret = (rand() % 100) + 1;
    printf("Guess the number (1 to 100): \n");
    while (attempts < 7) {
        printf("Enter guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess == secret) {
            printf("Correct! You got it in %d attempts.\n", attempts);
            return 0;
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }
    printf("Out of attempts! The number was %d.\n", secret);
    return 0;
}