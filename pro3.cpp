#include<bits/stdc++.h>
using namespace std;

{
    int m = A.length(), n = B.length();
 
    if (n != m)
       return -1;
    int count[256];
    memset(count, 0, sizeof(count));
    for (int i=0; i<n; i++)   // count characters in A
       count[B[i]]++;
    for (int i=0; i<n; i++)   // subtract count for
       count[A[i]]--;         // every character in B
    for (int i=0; i<256; i++)   // Check if all counts become 0
      if (count[i])
         return -1;
 
     int res = 0;
    for (int i=n-1, j=n-1; i>=0; )
    {
              while (i>=0 && A[i] != B[j])
        {
            i--;
            res++;
        }
 
              if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
}
 
int main()
{
    string A = "EACBD";
    string B = "EABCD";
    cout << "Minimum number of operations "
            "required is " << minOps(A, B);
    return 0;
}
