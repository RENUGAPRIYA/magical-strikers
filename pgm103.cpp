#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    char str[30] = "I am a string";
    for(int i = 0; i < strlen(str); ++i)
        str[i] = toupper(str[i]);
    std::cout << str;
}
