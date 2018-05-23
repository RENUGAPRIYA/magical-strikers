#include <iostream>
using namespace std;
int a (int[]);
int main ()
{
const int Numb = 12;
int i;
int a[Numb];
int max = a[0];
int min = a[0];

  for (i = 0; i < 12; i++)
    {

      if (a[i] > max)
        {
          max = a[i];
        }
      else if (a[i] < min)
        {
          min = a[i];
        }
    }

  cout << max << endl;
  cout << min << endl;


  return 0;
}
