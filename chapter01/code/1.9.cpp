#include <iostream>

int main()
{
    int ans = 0;
    int condition = 50;
    while (condition <= 100) {
        std::cout << ans << std::endl;
        ans += condition;
        condition ++;
    }
    std::cout << ans << std::endl;
    return 0;
}