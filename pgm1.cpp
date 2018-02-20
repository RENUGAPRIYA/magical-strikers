#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int number;
 cout<<"Enter a number : ";
 cin>>number;
 if(number>0)
   cout<<"Number is Positive";
 else if(number<0) 
   cout<<"Number is Negative";
 else
   cout<<"Number is Zero";
 getch();
}
