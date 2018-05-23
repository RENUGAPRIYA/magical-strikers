// C++ program to print distinct characters of a

# include <iostream>
using namespace std;
# define NO_OF_CHARS 256
 

void printDistinct(char *str)
{
   
    int count[NO_OF_CHARS];
 
   
    int i;
    for (i = 0; *(str+i); i++)
        if(*(str+i)!=' ')
            count[*(str+i)]++;
    int n = i;
 
    
    for (i = 0; i < n; i++)
        if (count[*(str+i)] == 1)
            cout<< str[i];
}
 

int main()
{
    char str[] = "GeeksforGeeks";
    printDistinct((str);
    return 0;
}
