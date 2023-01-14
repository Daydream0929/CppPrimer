#include <iostream>

int main()
{
    int ans = 0;
    
    // 1.9
    std::cout << "1.9 : " << std::endl;
    for (int i = 50; i <= 100; i ++ ) {
        ans += i;
    }
    std::cout << ans << std::endl;
    
    // 1.10
    std::cout << "1.10 : " << std::endl;
    for (int i = 10; i >= 0; i -- ) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // 1.11
    std::cout << "1.11 : " << std::endl;
    int a, b;
    std::cout << "please input a and b : " << std::endl;
    std::cin >> a >> b;
    for (int i = std::min(a, b); i <= std::max(a, b); i ++ ) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}