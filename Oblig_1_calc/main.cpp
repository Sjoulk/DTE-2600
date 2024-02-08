#include <iostream>
#include "mathops.h"


using namespace std;

// TO DO:
// 3. Lagre verdi fra siste operasjon -> flere ops samtidlig????????


int main() {
    while (true) {
        // Main Menu
        // All functions returns to main() loop after task completion.
        cout << "Calcatron v0.1: Main Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Square Root" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose your desired operation: ";

        // User input for main menu selection
        int option;                             // creates int variable 'option'
        cin >> option;                          // value of int 'option' = user input

        // Prompts user to try again, and returns to main menu if an invalid input is given.
        if (option > 6 || option < 1){
            cout << "Invalid input. Try again." << endl;
            continue;
        }

        // Exits program if "6. Exit" is chosen.
        if (option == 6) {
            cout << "Exiting program." << endl;
            break;
        }

        // Square root function placed first, as it only takes one input.
        // Makes it easier to group the other functions together.
        if (option == 5) {
            double a;
            cout << "Enter a number: " << endl; // User is prompted for an input
            cin >> a;                           // Saves the input as variable a
            cout << "The square root of " << a << " is: " << MathOps::square(a) << endl;
            continue;                           // Outputs the result and returns to the main menu
        }

        // Addition and multiplication takes vectors as input.
        // If either is chosen, the user is asked for number of inputs = n.
        // A vector of size n is created, containing input values.
        if (option == 1 || option == 3) {
            cout << "Enter the number of inputs: ";
            int n;
            cin >> n;

        // Prompts user to input numbers sequentially
            vector<double> nums(n);
            for (int i = 0; i < n; ++i) {                   // Repeatedly asks for new numbers until i = n.
                cout << "Enter number " << (i + 1) << ": "; // Prompts the user to input a number
                cin >> nums[i];                             // Takes input and places it in nums vector.
            }

        // Calls the "add" function if addition was chosen, calls the "multiply" function otherwise.
            if (option == 1) {
                cout << "Result: ";
                for (int j = 0; j < nums.size(); ++j) {     // Creates variable 'j' to count through vector elements
                                                            // and increases the value of 'j' by 1 for each pass
                cout << " " << nums[j];                     // Outputs element 'j' of vector nums
                if (j < nums.size() -1 ){                   // if 'j' is less than the size of nums-1:
                    cout << " +";                           // a '+' sign is added between the vector elements
                    }
                }

                cout << " = " << MathOps::add(nums) << endl;// after the last vector element an equal sign is added
                                                            // followed by the result of the operation.
            } else if (option == 3) {
                cout << "Result: ";
                for (int j = 0; j < nums.size(); ++j) {     // Creates variable 'j' to count through vector elements
                                                            // and increases the value of 'j' by 1 for each pass
                    cout << " " << nums[j];                 // Outputs element 'j' of vector nums
                    if (j < nums.size() -1 ){               // if 'j' is less than the size of nums-1:
                        cout << " *";                       // a '*' sign is added between the vector elements
                    }
                }
                cout << " = " << MathOps::multiply(nums) << endl;   // same as for addition
            }
        }
        // If subtraction or division is chosen, user is prompted to input two numbers
        else {
            double a, b;                            // Creates variable 'a' and 'b'
            cout << "Enter the first number: ";     // Prompts user to input number 1/2
            cin >> a;                               // Stores input in variable 'a'
            cout << "Enter the second number: ";    // Prompts user to input number 2/2
            cin >> b;                               // Stores input in variable 'b'

            switch (option) {                       // Depending on user choice:
            case 2:                                 // Performs and outputs the subtract operation
                cout << "Result: " << a << " - " << b << " = " << MathOps::subtract(a, b) << endl;
                break;                              // Returns to main menu
            case 4:                                 // Performs and outputs the divide operation
                cout << "Result: " << a << " / " << b << " = " << MathOps::divide(a, b) << endl;
                break;                              // Returns to main menu
            }
        }
    }
    return 0;
}
