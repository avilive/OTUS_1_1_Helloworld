#include "lib.h"

#include <iostream>

int main(int, char**)
{
    std::cout << "Version:" << BUILD_NUMBER << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
