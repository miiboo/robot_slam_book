#include "foo.h"
#include <iostream>
#include <string>

namespace foo
{
    MyPrint::MyPrint(std::string output):output_(output)
    {
        std::cout<<"class MyPrint created a object!";
        std::cout<<std::endl;
    }
    
    void MyPrint::ExcutePrint()
    {
        std::cout<<output_<<std::endl;
    }
}
