#include <iostream>

int main()
{
    int ans = 0;
    int a;
    while (std::cin >> a) {
        ans += a;
    }
    std::cout << ans << std::endl;
    return 0;
}