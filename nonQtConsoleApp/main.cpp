#include <iostream>

using namespace std;

int main()
{
    //1. cout
    std::cout << "Hello World!" << std::endl;
    //2. cerr
    std::cerr << "There was an error" << std::endl;
    //3.clog
    std::clog <<"This is clog" << std::endl;
//    return 0;
    //4.cin
    std::string  name;
    std::cout << "Please type in your firstname: ";
    std::cin >> name;
    std::cout << "your firstname is : " << name << std::endl;
    return 0;


}
