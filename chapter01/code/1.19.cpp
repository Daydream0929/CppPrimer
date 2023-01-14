#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int t = a > b ? b : a;
    while (t <= (a > b ? a : b)) {
        std::cout << t << std::endl;
        t ++;
    }
    return 0;
}