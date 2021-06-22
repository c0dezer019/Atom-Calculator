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

	char *a = StrToArr(input);
	char& ar = *a;

	cout << *a[1] << endl;

	return 0;
}
