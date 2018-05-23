#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
char string[80];
char num[80];
scanf("%s", string);

int i = 0;
int j = 0;
cout << i << endl;
while(string[i] != '\0')
{
if(string[i] >= '0' && string[i] <= '9')
{
num[j] = string[i];
j++;
}
i++;
}
num[j] = '\0';
int inputval = atoi(num);
return 0;
}
