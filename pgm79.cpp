#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x)
{  
  
  long double sr = sqrt(x);

 
  return ((sr - floor(sr)) == 0);
}

int main() {
 
        int a,b;
cout<<"enter inputs";
cin>>a>>b;
  x=a*b;
  if (isPerfectSquare(x))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
