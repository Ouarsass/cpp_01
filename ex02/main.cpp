#include <iostream>

int     main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    std::cout << "The memory address of the string variable" << std::endl;
}