// This program will advise type of triangle, length of triangle, and whether it is right triangle or not. 

#include<iostream>
#include<string>
using namespace std;
int main() {
	string rightTriangle, scalene, isosceles, equilateral;
	float a, b, c;
	cout << "Enter length of side A: ";
	cin >> a;
	cout << "Enter length of side B: ";
	cin >> b;
	cout << "Enter length of side C: ";
	cin >> c;
	cout << endl;
	// Validates initial data to be correct
	if (a > 0 && b > 0 && c > 0) {
	  // Validates the formation of a valid triangle
		if (a + b > c && b + c > a && a + c > b) {
			cout << "The length of all 3 sides combined equal " << a + b + c << "." << endl;
			// Validates all sides are the same 
			if (c == a && b == a && b == c) {
				cout << "This is an equilateral triangle." << endl;
			}
			// Validates no sides are of the same
			else if (a != b && b != c && a != c) { 
				cout << "This is a scalene triangle." << endl;
			}
			// Validates 2 sides are the same
			else if (a == b && a != c || c == a && b != a || c == b && c != a) {
				cout << "This is an isosceles triangle." << endl;
			} else {
				cout << "Fail safe, something is wrong with this code???";
			}
			// Validates a right angle triangle
			if (c*c == a*a + b*b || a*a == b*b + c*c || b*b == a*a + c*c) {
				cout << "This is a right angle triangle." << endl;
			} else {
				cout << "This is not a right angle triangle." << endl;
			}
		} else {
			cout << "Error, please re-enter as the value of sides do not match the triangle inequality theory, ";
			cout << "please re-enter as the sum of 2 side lengths must be more the length of the third side." << endl;
		}
	}	else	{
		cout << "Error, please re-enter by providing numbers with a greater than 0 value in order to meet the triangle inequality theory." << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
