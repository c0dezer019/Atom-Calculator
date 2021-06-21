// AtomCalculator.cpp : Defines the entry point for the application.
//

#include "AtomCalculator.h"
#include "utilities/StringWorks.cpp"


using namespace std;

int main()
{
	string arr = "1+2";

	cout << StrToArr(arr) << endl;

	return 0;
}
