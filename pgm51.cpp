#include <iostream>
using namespace std;

int both(int n) {

    int remainder;
    int sum = 0;

    while (n>0) {
        remainder = n%10;
        sum = sum + remainder;
        int digit = n%10;
        n = n/10;
        cout << "The digits are: " << digit << endl;
        }
    return sum;
}

int main () {

    int x;
    cout <<"Enter a number: " << endl;
    cin >> x;
        if (x<=0){
            return 0;
        }
    cout << "The sum of digits is: " << both(x) <<endl;

return 0;

}
