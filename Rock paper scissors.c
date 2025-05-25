#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    char *choices[] = {"Rock", "Paper", "Scissors"};

    // Seed the random number generator
    srand(time(0));

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Choose an option:\n");
    printf("0 - Rock\n1 - Paper\n2 - Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &playerChoice);

    // Generate computer's choice
    computerChoice = rand() % 3;

    printf("You chose: %s\n", choices[playerChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    // Determine winner
    if (playerChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}