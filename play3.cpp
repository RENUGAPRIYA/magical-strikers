#include <iostream>
using namespace std;

int main()
{
    int n, revNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        revNumber = revNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << revNumber;

    return 0;
}
