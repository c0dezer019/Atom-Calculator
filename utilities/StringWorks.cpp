#include "headers/StringWorks.h"

using namespace std;

char* StrToArr(string str)
{
    int n = str.length();
    char* arr = new char[n + 1];
    
    strcpy(arr, str.c_str());

    return arr;
}

string ArrToStr(char* arr, int size)
{
    int i;
    string str = "";

    for (i = 0; i < size; i++) 
        str = str + arr[i];

    return str;
}