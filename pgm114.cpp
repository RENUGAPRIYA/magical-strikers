#include <bits/stdc++.h>
using namespace std;
 
int findK(int n, int k)
{
    vector<long> a;
    
    for (int i = 1; i < n; i++) 
        if (i % 2 == 1)
            a.push_back(i);
  
    for (int i = 1; i < n; i++) 
        if (i % 2 == 0)
            a.push_back(i);
     
    return (a[k - 1]);
}
 

int main()
{
    long n = 10, k = 3;
    cout << findK(n, k) << endl;
    return 0;
}
