#include <windows.h>
#include <iostream>
#include <string>
using namespace std;


double firstInput;
double secondInput;
int operation;
string choice = "y";


void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main()
{
	cout << "Simple Calculator" << endl;
	cout << "=========================" << endl;
	cout << "Choose an operation:" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << "\n" << endl;


	while (choice != "n")
	{
		cout << "Enter your choice (1-4): ";
		cin >> operation;

		if (cin.fail() || operation < 1 || operation > 4) {
			cout << "Invalid input, please enter a number between 1 and 4!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}

		cout << "Enter the first number: ";
		cin >> firstInput;

		if (cin.fail()) {
			cout << "Invalid input." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}

		cout << "Enter the second number: ";
		cin >> secondInput;

		if (cin.fail()) {
			cout << "Invalid input." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}

		switch (operation)
		{
		case 1:
			add(firstInput, secondInput);
			break;
		case 2:
			subtract(firstInput, secondInput);
			break;
		case 3:
			multiply(firstInput, secondInput);
			break;
		case 4:
			divide(firstInput, secondInput);
			break;
		default:
			cout << "Enter a valid option!";

		}
		cout << "\n" << "Would you like to perform another operation? (y/n):";
		cin >> choice;

	}
	cout << "Thank you, goodbye!" << endl;

}


void add(double a, double b)
{
	double addResult = a + b;
	cout << "Result: " << a << " + " << b << " = " << addResult << endl;
}

void subtract(double a, double b)
{
	double subtractResult = a - b;
	cout << "Result: " << a << " - " << b << " = " << subtractResult << endl;
}

void multiply(double a, double b)
{
	double multiplyResult = a * b;
	cout << "Result: " << a << " * " << b << " = " << multiplyResult << endl;
}

void divide(double a, double b)
{
	if (b == 0)
	{
		cout << "Error! Cannot divide by zero!";
		return;
	}

	double divideResult = a / b;
	cout << "Result: " << a << " / " << b << " = " << divideResult << endl;
}