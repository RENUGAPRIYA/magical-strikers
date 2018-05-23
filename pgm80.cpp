#include <bits/stdc++.h>
using namespace std;

int main() {
  
      int num,rem,odd=0,digit;
cout<<"enter number";
cin>>num;


    while(num>0){

               digit = num % 10;

               num = num / 10;

               rem = digit % 2;

               if(rem != 0)

             cout<<digit;
  return 0;
}
