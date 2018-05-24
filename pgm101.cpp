#include <iostream>
using std::cout;
using std::endl;
 
int main()
{
   char string[] = "this is a test";
 
   cout << string << endl;
 
   for( int i = 0; string[i] != '\0'; i++);
   string[--i] = '\0';
 
   cout << string << endl;
 
   return 0;
}
