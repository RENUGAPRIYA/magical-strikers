#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int number;
 cout<<"Enter a number : ";
 cin>>number;
 if(number>0)
   cout<<"Number is +ve";
 else if(number<0) 
   cout<<"Number is -ve";
 else
   cout<<"Number is Zero";
 getch();
}
