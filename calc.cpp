// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;

// Main program
main()
{
    char op;
    float ele1, ele2;

    // It allows user to enter operator i.e. +, -, *, /
    cin >> op;

    // It allow user to enter the operands
    cin >> ele1 >> ele2;

    // Switch statement begins
    switch (op) {
<<<<<<< HEAD

	    // If user enter *
        case '*':
            cout << ele1 * ele2;
            break;
<<<<<<< HEAD
=======

	   // If user enter -
        case '-':
            cout << ele1 - ele2;
            break;
>>>>>>> subtraction
=======

	    // If user enter /
        case '/':
            cout << ele1 / ele2;
            break;

>>>>>>> division

        // If user enter +
        case '+':
            cout << ele1 + ele2;
            break;














	    // If the operator is other than +, -, * or /,
        // error message will display
        default:
            cout << "Error! operator is not correct";
            break;
    } // switch statement ends

    return 0;
}
