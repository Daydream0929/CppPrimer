#include <iostream>

int main()
{
    int i = 42;
    int *pi = nullptr;
    pi = &i;
    std::cout << *pi << " " << std::endl;
    *pi = 0;
    std::cout << *pi << " " << std::endl;
    return 0;
}