

#include "functions.h"

#include <iostream>				// to use cin and cout
using namespace std;



int main()
{

    /*IMPORTANT:
     * IF YOU WANT TO RUN MAIN PROGRAM
     * GO TO  CMakeLists.txt and make changes
     * In one moment at a time you Can Run Either Tests or Main Program
     *
     * By default it will run TESTS ONLY
    */



    // Declare variable value, valuero that hold double precision real numbers
        double value, valuero;
    // Declare variable decdig that holds whole numbers
        int decdig;
    // Prompt the user to "Enter the real number: "
        cout << "Enter the real number: ";
    // Read from keyboard the value entered by the user and assign it to side
        cin >> value;
    // Prompt the user to "Enter number of digits: "
        cout << "\nEnter number of digits: ";
    // Read from keyboard the value entered by the user and assign it to decdig
        cin >> decdig;
    // Call function round_off() to round the real number to the number of decimal digits specified and assign the result to valuero
        valuero = round_off(value, decdig);
    // Format the output to display the numbers in fixed format with ten decimal digits
        cout << fixed << setprecision(10);
    // Display on the screen, using 23 columns, the message
    //	   "The original number is ", value
        cout << setw(23) <<"\nThe original number is " << value << endl << endl;
    // Format the output to display the numbers in fixed format with the number of decimal digits specified plus 2
        cout << fixed << setprecision(decdig+2);
    // Display on the screen, using 23 columns, the message
    //	   "The rounded number is ", valuero
        cout << setw(23) << "The rounded number is " << valuero << endl << endl;
    return 0;
}

