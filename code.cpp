#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int numberToGuess = std::rand() % 100 + 1;
    int userGuess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "Guess a number between 1 and 100: " << std::endl;

    while (userGuess != numberToGuess) {
        std::cin >> userGuess;
        numberOfTries++;

        if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again: " << std::endl;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again: " << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the correct number: " << numberToGuess << std::endl;
            std::cout << "It took you " << numberOfTries << " tries." << std::endl;
        }
    }

    return 0;
}
