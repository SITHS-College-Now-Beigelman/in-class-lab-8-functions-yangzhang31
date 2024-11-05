//Yang Zhang
//Lab 8
//11.4.2024

#include <iostream>
#include <cmath>

using namespace std;

int doubleMultiply(int a, int b) { //the function named doubleMultiply with two things
    int product; //Declares varialbe
    product = a * b * 2; //that varialbe is equal to a * b
    return product; //Returns that product
}

double getSum(double x, double y, double z);

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
    cout << "Twice the product of the numbers is: " << doubleMultiply(num1, num2) << endl; //outputs the product of the numbers using the fucntion created at the top 

    cout << endl;
    cout << "----------------- PART THREE -----------------" << endl;
    cout << endl;

    double numOne, numTwo, numThree;
    cout << "Enter three numbers seperated by spaces: ";
    cin >> numOne >> numTwo >> numThree;
    cout << "The sum of " << numOne << ", " << numTwo << ", and " << numThree << " is " << getSum(numOne, numTwo, numThree) << endl;

    return 0; //returns a 0 to the function main
}

double getSum(double x, double y, double z) {
    double result; 
    result = x + y +z; 
    return result;
}

/*

----------------- PART ONE -----------------

Please input a number with decimals: 2.2
Used function sqrt to find that the square root of 2.2 is 1.48324
Used function pow to find that 2.2 to the power of the fourth is 23.4256
Used function floor to find that the largest whole number that is not greater than 2.2 is 2

----------------- PART TWO -----------------

Enter two integers: 2 1
Twice the product of the numbers is: 4

----------------- PART THREE -----------------

Enter three numbers seperated by spaces: 3 4 5
The sum of 3, 4, and 5 is 12

*/