#include <cmath>
using namespace std;
int main(){
   int sum, num;
   cout<<"Armstrong numbers between 1 and n: ";
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         for(int k = 0; k < n; k++) {
            num = i * 100 + j * n + k;
            sum = pow(i, 3) + pow(j, 3) + pow(k, 3);
            if(num == sum)
               cout<<num<<"  ";
         }
      }
   }
   return 0;
}
