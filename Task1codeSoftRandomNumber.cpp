#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;// For absolute difference calculation

int main() {
    srand(time(nullptr));
    int randomNumber = rand()%100+1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have chosen a number between 1 and 100. Try to guess it.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            if (guess - randomNumber <= 10) {
                cout << "You are close but try a lower number.\n";
            } else {
                cout << "Too high! Try again.\n";
            }
        } else if (guess < randomNumber) {
            if (randomNumber - guess <= 10) {
                cout << "You are close but try a higher number.\n";
            } else {
                cout << "Too low! Try again.\n";
            }
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " correctly!\n";
            cout << "It took you " << attempts << " attempts.\n";
        }
    } while (guess != randomNumber);

    return 0;
}
