#include <iostream>
#include <string>

enum class Case
{
    SENSITIVE,
    INSENSITIVE
};

std::string ToLower(const std::string &str)
{
    std::string retString{str};

    for(int i = 0; i < str.length(); ++i)
    {
        retString.at(i) = tolower(str.at(i));
    }

    return retString;
}

size_t Find(
    const std::string &source,
    const std::string &search_string,
    Case searchCase = Case::INSENSITIVE,
    size_t offset = 0)
{
    if(searchCase == Case::SENSITIVE)
    {
        return source.find(search_string,offset);
    }
    else
    {
        std::string tempStr = ToLower(source);
        std::string tempSearch = ToLower(search_string);
        return tempStr.find(tempSearch,offset);
    }
}

int main()
{
    std::string source{"Hello World! - Yev"};
    std::string search1{"Hello"};
    std::string search2{"World"};
    std::string search3{"!"};
    std::string search4{"Yev"};

    std::cout << Find(source, search1, Case::SENSITIVE, 0) << ' ' << Find(source, search2, Case::SENSITIVE, 0) << ' ' << Find(source, search3, Case::SENSITIVE, 0) << ' ' << Find(source, search4, Case::SENSITIVE, 0) << '\n';
    std::cout << Find(source, search1, Case::INSENSITIVE, 0) << ' ' << Find(source, search2, Case::INSENSITIVE, 0) << ' ' << Find(source, search3, Case::INSENSITIVE, 0) << ' ' << Find(source, search4, Case::INSENSITIVE, 0) << '\n';
    return 0;
}