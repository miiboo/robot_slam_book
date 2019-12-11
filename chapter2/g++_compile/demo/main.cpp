#include "foo.h"

int main(int argc, char** argv)
{
    foo::MyPrint my_print("I can output string!");
    my_print.ExcutePrint();
    return 0;
}
