#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int small, arr[50], size, i;
	cout<<"Enter Array Size (max 50) : ";
	cin>>size;
	
         cout<<"Enter array elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Searching for smallest element ...\n\n";
	
        small=arr[0];
	for(i=0; i<size; i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
		}
	}
	cout<<"Smallest Element = "<<small;
	getch();
}
