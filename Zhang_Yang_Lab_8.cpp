//Yang Zhang
//Lab 8
//11.4.2024

#include <iostream>
#include <cmath>

using namespace std;

int doubleMultiply(int a, int b) { //the function named doubleMultiply with two things
    int product; //Declares varialbe
    product = a * b * 2; //that varialbe is equal to a * b
    return product;
}

int main() {
    cout << endl;
    cout << "----------------- PART ONE -----------------" << endl; //Seperates the parts in the terminal
    cout << endl;

    double number; //The user inputed number

    cout << "Please input a number with decimals: "; //Prompts user to input number
    cin >> number; //Stores number in double called number
    
    double squareRoot = sqrt(number); //uses funtion sqrt to find the square root of the number
    cout << "Used function sqrt to find that the square root of " << number << " is " << squareRoot << endl; //outputs the square root of the number
    double fourthPower = pow(number, 4); //uses funtion pow to find the number to the fourth
    cout << "Used function pow to find that " << number << " to the power of the fourth is " << fourthPower << endl; //outputs the number to the fourth
    double numberFloor = floor(number); //uses funtion floor to find the greatest whole number that is not greater than the number
    cout << "Used function floor to find that the largest whole number that is not greater than " << number << " is " << numberFloor << endl; //outputs that

    cout << endl;
    cout << "----------------- PART TWO -----------------" << endl;
    cout << endl;

    int num1, num2; //The two int variables
    cout << "Enter two integers: "; //prompts user for the two integers
    cin >> num1 >> num2; //stores the two integers
    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl; //outputs the product of the numbers 

    cout << endl;
    cout << "----------------- PART THREE -----------------" << endl;
    cout << endl;

    return 0; //returns a 0 to the function main
}