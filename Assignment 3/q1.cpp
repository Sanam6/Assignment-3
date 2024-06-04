#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Breadth : ";
    cin >> breadth;
    if (length == breadth)
    {
        cout << "It is a Square";
    }
    else
    {
        cout << "It is a rectangle";
    }

    return 0;
}