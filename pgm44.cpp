#include <iostream>
using namespace std;
  bool inRange(int low, int high, int x)
{
    return ((x-high)*(x-low) <= 0);
}
 
int main()
{
    inRange(1, 10, 30)? cout << "Yes\n":  cout  <<"No\n";
    inRange(1, 10, 5)?  cout << "Yes\n":  cout  <<"No\n";
}
