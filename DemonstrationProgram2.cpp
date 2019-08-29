#include <iostream>

using namespace std;

int main()
{
	int input = -1;

	cout << "While Loop" << endl;
	while (input >= 0)
	{
		cout << "Enter a number: " << endl;
		cin >> input;
	}

	cout << "Do While Loop" << endl;
	do
	{
		cout << "Enter a number: " << endl;
		cin >> input;
	} while (input >= 0);

	cout << "number is negative" << endl;


	return 0;
}