#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    const int SIZE = 5;
    int array []= {4,2,3,1,5};
    int smallest=array[0];
    for (int i=0; i<=SIZE-1; i++) 
    {
        if (array[i]<=smallest && i!=SIZE-1) 
        {
            smallest=array[i];
        }
        else if (array[i]<= smallest && i==SIZE-1)
        {
            smallest=array[i];
            cout << smallest << endl;
        }
      }
    return 0;
}
