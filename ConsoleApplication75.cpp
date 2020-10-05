#include<iostream>
#include<cstdlib>
#include <string>
#include"Header.h"
using namespace std;
template<typename T>
ostream& operator<< (ostream& out, Dynamic_Array<T> a);
int main()
{
    int size, choice;
    cout << "Enter the type of array: 1 -- int, 2 -- char";
    cin >> choice;
    if (choice == 2) {
        char* ms;
        cout << "Enter the size: ";
        cin >> size;
        ms = new char[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Input the" << i << " element of array: ";
            cin >> ms[i];
        }
        Dynamic_Array<char> a(size, ms);
        for (int i = 0; i < size; i++) {
            cout << a[i] << endl;
        }
        int k;
        k = a.search_max();
        cout <<"The max value is  "<< a[k] << endl;
    }
    else {
        int* ms;
        cout << "Enter the size: ";
        cin >> size;
        ms = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Input the" << i << " element of array: ";
            cin >> ms[i];
        }
        Dynamic_Array<int> a(size, ms);
        for (int i = 0; i < size; i++) {
            cout << a[i] << endl;
        }
        int k;
        k = a.search_max();
        cout << "The max value is  " << a[k] << endl;
    }
    return 0;
}