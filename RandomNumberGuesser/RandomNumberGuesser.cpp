// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Get a different random number each time the program runs
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNum = rand() % 101;

    //std::cout << randomNum << "\n";
    int x = 0;
    int upper = 100;
    int lower = 1;

    while (x != randomNum) {
        std::cout << "Type a number: "; // Type a number and press enter
        std::cin >> x; // Get user input from the keyboard

        if (upper > x && x > lower) {

            if (x < randomNum) {
                std::cout << "The random number is larger than you number\n";
                lower = x;
            }

            if (x > randomNum) {
                std::cout << "The random number is smaller than you number\n";
                upper = x;
            }

            std::cout << "Your number is: " << x << "\n"; // Display the input value

        }
        else {
            std::cout << "Please type a number within the range\n";
        }

        if (x == randomNum) break;

        std::cout << "Current ranger is: " << lower << " - " << upper << "\n";
    }

    std::cout << "You win!! The random number is: " << randomNum << "\n";
    system("pause");

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
