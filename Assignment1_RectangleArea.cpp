
#include <iostream>

using namespace std;

int main()
{
	// Area of Rectangle 
	cout << "Rectangle Calculator"" << endl << endl;

	// get height and width from user
	double height;
	double width;
	cout << "Enter height and width: ";
    cin >> "height" >> width;
	// calculate area
	double area = height * width;

	// write output to console
	cout << "Area" << area << endl;

	// return value that indicates normal program exit
    return 0;
}
