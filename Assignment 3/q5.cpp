#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "Enter the operator(+,-,*,/) : ";
    cin >> op;
    cout << "Enter two number : "<<endl;
    cin >> a>>b;
    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        cout << "Invalid Operator";
    }
    return 0;
}