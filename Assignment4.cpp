#include <iostream>

using namespace std;

int main() {

    int num1, num2, num3, num4;

    cout << "Enter the first number:";
    cin >> num1;

    cout << "Enter the second number:";
    cin >> num2;

    cout << "Enter the third number:";
    cin >> num3;

    cout << "Enter the fourth number:";
    cin >> num4;

    cout << "You have entered " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << endl;

    int product = num1 * num2 * num3 * num4;
    cout << "The product is: " << product << endl;

    int avg = (num1 + num2 + num3 + num4) / 4;
    cout << "The average is: " << avg << endl;

    double avgDouble = (double) (num1 + num2 + num3 + num4) / (double) 4;
    cout << "Average in double is: " << avgDouble << endl;

    return 0;
}
