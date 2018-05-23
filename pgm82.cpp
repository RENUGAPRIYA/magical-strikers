#include <iostream>
#include<conio.h>
using namespace std;

int main() {
  
      float l,b;
     float area=0;
  cout<<"enter l&b";
  cin>>l>>b;

   area=l*b;
  std::cout<<set precision(5);
  std::cout<<area;
  return 0;
}
