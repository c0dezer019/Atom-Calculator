// AtomCalculator.cpp : Defines the entry point for the application.
//

#include "AtomCalculator.h"
#include "utilities/StringWorks.cpp"


using namespace std;

int main()
{
	string input;

	cout << "Expression: ";
	cin >> input;

	cout << "You entered " << StrToArr(input) << endl;

	return 0;
}
