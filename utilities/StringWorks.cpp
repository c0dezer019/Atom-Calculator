#include "StringWorks.h"

using namespace std;

char* StrToArr(string str)
{
    int n = str.length();
    char* arr = new char[n + 1];
    strcpy(arr, str.c_str());

    return arr;
}