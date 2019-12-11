#ifndef FOO_H_
#define FOO_H_

#include <string>

namespace foo
{
    class MyPrint
    {
    public:
        MyPrint(std::string output);
        void ExcutePrint();

        std::string output_;
    };
}
#endif

