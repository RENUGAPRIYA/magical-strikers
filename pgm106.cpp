#include <iostream>
using namespace std;

char letters[27] = "abcdefghijklmnopqrstuvwxyz";
void main()
{
	while(true)
	{
   cout << "Enter a letter: ";
		
		char letterIn;
		
		cin >> letterIn;
		
		for(int i = 1; i <= 26; i++)
		{
			if(letterIn == letters[i-1])
			{
				cout << "Letter #" << i << "\r\n\r\n";
				break;
			}
		}
	}	
	
}
