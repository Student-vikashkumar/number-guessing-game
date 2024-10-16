Number Guessing Game
This program allows the user to guess a number between 1 and 100. The program randomly generates a number, and the user keeps guessing until they guess the correct number. The program provides feedback for each guess, telling the user whether their guess was too high or too low.

Program Explanation:
cpp
Copy code
#include <iostream>  // For input and output
#include <cstdlib>   // For rand() and srand() to generate random numbers
#include <ctime>     // For time() to seed the random number generator
#include <iostream>: This library allows us to use input/output streams, such as std::cout for printing and std::cin for reading user input.
#include <cstdlib>: This library provides the rand() function, which generates random numbers, and srand(), which initializes the random number generator.
#include <ctime>: This is used to seed the random number generator using the current time, so the generated numbers are different every time the program runs.
cpp
Copy code
int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));  // Seed the random number generator
std::srand(static_cast<unsigned int>(std::time(nullptr))): This line initializes the random number generator using the current time. std::time(nullptr) returns the current time in seconds, which changes each time you run the program. Casting it to unsigned int is required because srand() needs an unsigned integer as a seed.
cpp
Copy code
    int numberToGuess = std::rand() % 100 + 1;  // Generate a random number between 1 and 100
    int userGuess = 0;                          // Variable to store user's guess
    int numberOfTries = 0;                      // Counter to keep track of the number of guesses
int numberToGuess = std::rand() % 100 + 1;: This generates a random number between 1 and 100. std::rand() generates a random number, and % 100 ensures it's between 0 and 99. Adding +1 shifts the range to 1 through 100.
int userGuess = 0;: This variable stores the user's guess. It is initialized to 0 but will be updated as the user makes guesses.
int numberOfTries = 0;: This keeps track of how many guesses the user has made. It increments after each guess.
cpp
Copy code
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "Guess a number between 1 and 100: " << std::endl;
std::cout: Displays a welcome message and prompts the user to guess a number between 1 and 100.
cpp
Copy code
    while (userGuess != numberToGuess) {
        std::cin >> userGuess;    // Read the user's guess
        numberOfTries++;          // Increment the number of guesses
while (userGuess != numberToGuess): This is the main game loop. It continues as long as the user's guess is not equal to the randomly generated number (numberToGuess).
std::cin >> userGuess;: This reads the user's input and stores it in the userGuess variable.
numberOfTries++;: Each time the user makes a guess, this increments the numberOfTries counter by 1.
cpp
Copy code
        if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again: " << std::endl;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again: " << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the correct number: " 
                      << numberToGuess << std::endl;
            std::cout << "It took you " << numberOfTries << " tries." << std::endl;
        }
    }
if (userGuess > numberToGuess): If the user's guess is greater than the random number, the program tells them "Too high!" and prompts them to guess again.
else if (userGuess < numberToGuess): If the user's guess is lower than the random number, the program tells them "Too low!" and prompts them to guess again.
else: If the guess is equal to the random number, the program congratulates the user and displays the number of attempts they made.
std::cout << "It took you " << numberOfTries << " tries.": This prints the number of attempts it took the user to guess the correct number.
cpp
Copy code
    return 0;
}
return 0;: This indicates that the
