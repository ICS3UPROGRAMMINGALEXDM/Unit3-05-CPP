// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04/02/22
// Description:This program uses a switch case to find a month name that
// corresponds with a number

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// defining the color set
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main() {
    // defining the variables
    int month;

    // get month from user
    cout << "Enter the month number below." << endl;
    cin >> month;

    // Switch case for returning the name of the month entered by the user
    switch (month) {
        case 1:
        cout << BOLDBLUE << month << " represents January!" << RESET;
        break;

        case 2:
        cout << BOLDMAGENTA << month << " represents February!" << RESET;
        break;

        case 3:
        cout << BOLDGREEN << month << " represents March!" << RESET;
        break;

        case 4:
        cout << BOLDMAGENTA << month << " represents April!" << RESET;
        break;

        case 5:
        cout << BOLDRED << month << " represents May!" << RESET;
        break;

        case 6:
        cout << BOLDCYAN << month << " represents June!" << RESET;
        break;

        case 7:
        cout << BOLDYELLOW << month << " represents July!" << RESET;
        break;

        case 8:
        cout << BOLDYELLOW << month << " represents August!" << RESET;
        break;

        case 9:
        cout << BOLDGREEN << month << " represents September!" << RESET;
        break;

        case 10:
        cout << BOLDCYAN << month << " represents October!" << RESET;
        break;

        case 11:
        cout << BOLDBLUE << month << " represents November!" << RESET;
        break;

        case 12:
        cout << BOLDRED << month << " represents December!" << RESET;
        break;

        default:
        cout << month <<
        " to my knowledge, does not represent a month" << RESET;
        break;
    }
}
