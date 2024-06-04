#include <iostream>
using namespace std;
int main()
{
    int cp, sp, ans;
    cout << "Enter the cost Price : ";
    cin >> cp;
    cout << "Enter the Selling Price : ";
    cin >> sp;
    if (sp > cp)
    {
        ans = sp - cp;
        cout << "Profit = " << ans;
    }
    else if (sp == cp)
    {
        cout << "No Profit and No Loss";
    }
    else
    {
        ans = cp - sp;
        cout << "Loss = " << ans;
    }

    return 0;
}