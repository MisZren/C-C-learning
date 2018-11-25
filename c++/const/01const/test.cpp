#include <stdio.h>
#include <iostream>

void foo_const_cpp();
const int n = 4;

int main(int argc, char const *argv[])
{
/*     bool b = true;
    
    std::cout << sizeof(bool) << std::endl; */

/*     const int n = argc;
    std::cout << n << std::endl;

    int* pN = (int*)&n;
    *pN = 100;
    std::cout << n << std::endl; */

    std::cout << n << std::endl;
    foo_const_cpp();

    return 0;
}
