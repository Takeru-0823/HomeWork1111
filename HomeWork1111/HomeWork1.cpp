#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void swap_string(char* s1, char* s2);

int main()
{
    char p[100] = "ABCDEF";
    char q[100] = "XYZ";

    swap_string(p, q);

    cout << "p > " << p << endl
         << "q > " << q << endl;
}

void swap_string(char* s1, char* s2)
{
    int len = strlen(s1);
 
    char* array = new char[len + 1];

    strcpy(array, s1);
    strcpy(s1, s2);
    strcpy(s2, array);

    delete[] array;

}

