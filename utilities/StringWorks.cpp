#include "StringWorks.h"

using namespace std;

string StrToArr(string str)
{
    int n = str.length();
    char arr[n + 1];
    strcpy(arr, str.c_str());

    return arr;
}