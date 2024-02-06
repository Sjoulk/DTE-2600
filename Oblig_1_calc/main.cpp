#include <iostream>
#include "mathops.h"

using namespace std;

// TO DO:
// 1. fix comma input -> String???
// 2. sqrt må return til main()
// 3. Lagre verdi fra siste operasjon -> flere ops samtidlig????????
// 4. full GUI based calc istedet?????????

int main() {
    while (true) {
        // Main Menu
        // All functions returns to main() loop after task completion.
        cout << "Calcatron v0.1: Main Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        //cout << "5. Square Root" << endl;
        cout << "6. Exit" << endl;
        cout << "Select an option: ";

        // User input for selecting mathematical operation
        int option;
        cin >> option;

        // Exits program if Exit of invalid input is chosen
        if (option >= 6) {
            cout << "Exiting program." << endl;
            break;
        }

        // Square root function placed first, as it only takes one input.
        // if (option == 5) {
        //     double a;
        //     cout << "Enter a number: " << endl;
        //     cin >> a;
        //     cout << "Result: " << MathOps::square(a) << endl;

        // }

        // Addition and multiplication takes a vector as input.
        // If either is chosen, the user is asked for number of inputs = n.
        // A vector of size n is created, containing input values.
        if (option == 1 || option == 3) {
            cout << "Enter the number of inputs: ";
            int n;
            cin >> n;

        // Prompts user to input numbers sequentially
            vector<double> nums(n);
            for (int i = 0; i < n; ++i) {                   // repeatedly asks for new numbers until i = n.
                cout << "Enter number " << (i + 1) << ": ";
                cin >> nums[i];
            }

        // Calls the "add" function if addition was chosen, or calls the "multiply" that was chosen instead.
            if (option == 1) {
                cout << "Result: " << MathOps::add(nums) << endl;
            } else if (option == 3) {
                cout << "Result: " << MathOps::multiply(nums) << endl;
            }

        // If subtraction or division is chosen, user is prompted to input two numbers
        } else {
            double a, b;
            cout << "Enter two numbers, separated by a space or enter: ";
            cin >> a >> b;
            switch (option) {
            case 2:
                cout << "Result: " << MathOps::subtract(a, b) << endl;
                break;
            case 4:
                cout << "Result: " << MathOps::divide(a, b) << endl;
                break;
            }
        }
    }
    return 0;
}
