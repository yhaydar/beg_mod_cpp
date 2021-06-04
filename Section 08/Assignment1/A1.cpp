#include <iostream>
#include <string>
#include <ctype.h>

std::string ToUpper(const std::string &str)
{
    std::string retString{str};

    for(int i = 0; i < str.length(); ++i)
    {
        retString.at(i) = toupper(str.at(i));
    }

    return retString;

}

std::string ToLower(const std::string &str)
{
    std::string retString{str};

    for(int i = 0; i < str.length(); ++i)
    {
        retString.at(i) = tolower(str.at(i));
    }

    return retString;
}

int main()
{

    std::string str{"Hello World! - Yev"};

    std::cout << ToUpper(str) << '\n';
    std::cout << ToLower(str) << '\n';

    return 0;
}