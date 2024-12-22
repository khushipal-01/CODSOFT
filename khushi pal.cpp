#include <iostream>
#include <random>

using namespace std;

int main() {
  // Use a modern random number generator (C++11 onwards)
  random_device rd;
  mt19937 generator(rd());
  uniform_int_distribution<int> distribution(1, 100); // Range: 1 to 100

  // Generate a random secret number
  int secret_number = distribution(generator);

  // Variable to store the user's guess
  int guess;

  // Inform the user about the range of the secret number
  cout << "I'm thinking of a number between 1 and 100." << endl;

  // Game loop: continues until the user guesses correctly
  do {
    // Prompt the user to enter their guess
    cout << "Enter your guess: ";
    cin >> guess;

    // Check if the guess is too low
    if (guess < secret_number) {
      cout << "Too low!" << endl;
    } else if (guess > secret_number) {
      cout << "Too high!" << endl;
    }
  } while (guess != secret_number);

  // Congratulate the user on guessing the correct number
  cout << "Congratulations! You guessed it!" << endl;

  return 0;
}
