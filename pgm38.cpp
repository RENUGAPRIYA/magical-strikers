#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    cout << "1st value is "<< a <<endl;
    cout << "2nd value is "<< b <<endl;
     a = a ^ b;
    b = a ^ b;
    a = a ^ b;
     cout <<"== After Swapping ==" <<endl;
    cout << "1stvalue is "<< a <<endl;
    cout << "2nd value is "<< b <<endl;
    return 0;
}
