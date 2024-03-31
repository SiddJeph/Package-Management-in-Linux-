#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    srand(time(0));

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice. Please choose a number between 1 and 3.\n");
        return 1;
    }

    computerChoice = rand() % 3 + 1;  // Generate random choice for computer (1-3)

    printf("You chose: ");
    switch (playerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    printf("Computer chose: ");
    switch (computerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    // Determine winner
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

