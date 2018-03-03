#include<iostream.h>
#include<conio.h>

void main()
{
clrscr(); 
int i,n,x,large=0;
for(i=0;i<10;++i)
{
cout<<“Enter number “<<i+1<<“:”;
cin>>x;
if(x>large)
large=x;
}
cout<<“The largest number is “<<large;
getch();
}

