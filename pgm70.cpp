#include <bits/stdc++.h>
using namespace std;
 

int round(int n)
{
   
    int a = (n / 2) * 2;
     
    int b = a + 2;
 
    
    return (n - a > b - n)? b : a;
}
 

int main()
{
    int n = 4722;
    cout << round(n) << endl;
    return 0;
}
