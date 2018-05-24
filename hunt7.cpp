#include <iostream>

using namespace std;

int main()
{
   
 int arr[100],n,i=0;
 cout<<" enter arr size and elements";
   cin>>n;
  for(i=0;i<=n;i++)
{ cin>>arr[i];
}
for(i=0;i<=n;i++)
{
if((i%2==0)&&(arr[i]%2==1))

{ cout<<arr[i];
}
else if((i%2==1)&&(arr[i]%2==0))
{
cout<<arr[i];
}
else
{ 
cout<<arr[i];
}
}
    return 0;
}
