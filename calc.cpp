#include <iostream>

using namespace std;



int main()
{

	int a,b,c,op;
	cout<<"enter inputs";
	cin>>a>>b;
	cout<<"select option 1.+ 2.- 3.* 4./ 5.^ 6.% ";
	cin>>op;
	switch(op)
	{
		case 1:
		       c=a+b;
		       cout<<c;
	      	   break;
	   case 2:
		      c=a-b;
		      cout<<c;
	       	  break;
	   case 3:
		      c=a*b;
		      cout<<c;
	       	  break;
	   case 4:
		      c=a/b;
		      cout<<c;
	       	  break;
	   case 5:
		      c=a^b;
		      cout<<c;
	       	  break;
	   case 6:
		      c=a%b;
		      cout<<c;
	       	  break;
	   default:cout<<"retry";
	}
	return 0;
}
