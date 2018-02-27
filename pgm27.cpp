#include <iostream>
#include <string>
using namespace std;

int main()
{
   double num1;
   double num2;
   string op;
   double num3;
   int x;
   bool y = false;

   do
   {
      cout<<"Press t to terminate the application"<<endl;

      cout<<"Enter the first number"<<endl;
      cin>>num1;

      cout<<"Enter the operator"<<endl;
      cin>>op;
      cout<<"Enter the next number"<<endl;
      cin>>num2;

      if(op=="/"&&num2==0)
      {
         cout<<"You are attempting to divide by 0.";
         y = true;
      }

      if(y==false)
      {
         if(op=="+") {
            num3 = num1+num2;
         }
         else if(op=="-") {
            num3 = num1-num2;
         }
         else if(op=="*"||op=="x"||op=="X") {
            num3 = num1*num2;
         }
         else {
            num3 = num1/num2;
         }
         cout<<endl;
         cout<<endl;
         cout<<"Answer:"<<num3<<endl<<endl;
      }
   } while(x!=12);

   return 0;
}
