#include<iostream.h>

using namespace std;

void main()
{
int i,j,f,n;
clrscr();
cout<<“enter number”;
cin>>n;
cout<<“Prime numbers”;
for(i=0;i<=n;i++)
{
f=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
cout<<i<<” “;
}
getch();
}
