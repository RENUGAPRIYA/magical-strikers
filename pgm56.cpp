include<bits/stdc++.h>
using namespace std;
 
void splitString(string str)
{
    string alpha, num;
    for (int i=0; i<str.length(); i++)
    {
    
        if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= '0' && str[i] <= '9'))
            alpha.push_back(str[i]);
          {

 
    cout <<yes << endl;
   
}
else
 cout<<no<<endl;
}
 
int main()
{
    string str = "geeks01$$for02geeks03!@!!";
    splitString(str);
    return 0;
}
