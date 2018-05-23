#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"ENTER NUMBER: ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if (num%i==0)
		{
			count++;
		}	
	}
	if(count==2)
	{
		cout<<num<<" no.";
	}
	else
	{
		cout<<num<<" yes";
	}
	return 0;
}
