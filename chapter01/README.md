# 1.1 编写一个简单的 C ++ 程序
* 每个 C ++ 程序都包含一个或多个函数（function），其中一个必须命名为 main 。
    ```
    int main()
    {
        return 0;
    }
    ```
* 类型是程序设计最基本的概念之一。如果一个名为 v 的变量的类型为 T ,我们通常说 “ v 具有类型 T “，或 “ v 是一个 T 类型变量”。
  
## 1.1.1 编译 运行程序
* 练习 1.1 查阅你使用的编译器的文档，确定它所使用的文件命名约定。编译并运行第 2 页的 main 程序
    ```
    #include <iostream>

    int main()
    {
        return 0;
    }
    ```
* 练习 2.2 改写程序，让它返回 -1。返回值 -1 通常被当作程序错误的标识。重新编译并运行你的程序，观察你的系统如何处理 main 返回的错误标识
    ```
    #include <iostream>

    int main()
    {
        return -1;
    }
    ```

# 1.2 初识输入输出
* 标准输入 `cin`
* 标准输出 `cout`

* 练习 1.3 编写程序，在标准输出上打印Hello，World。
    ```
    #include <iostream>

    int main()
    {
        std::cout << "Hello, World。";
        return 0;
    }
    ```

* 练习 1.4 我们的程序使用加法运算符 + 来将两个数相加。 编写程序使用乘法运算符 * ，来打印两个数的积。
    ```
    #include <iostream>

    int main()
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a * b << std::endl; 
        return 0;
    }
    ```

* 练习 1.5 我们将所有输出操作放在一条很长的语句中。重写程序，将每个运算对象的打印操作放在一条独立的语句中。

* 练习 1.6 解释下面程序片段是否合法
    ```
    std::cout << "The sum of " << v1; 
            << " and " << v2;
            << " is " << v1 + v2 << std::endl;
    ```
    正确代码
    ```
    std::cout << "The sum of " << v1; 
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    ```

* 练习 1.7 编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。
    ```
    #include <iostream>

    int main()
    {
        std::cout << /* "*/" */; // ❌
        return 0;
    }
    ```
    报错如下
    ```
    a.cpp:5:28: error: missing terminating " character
    5 |         std::cout << /* "*/" */;
    ``` 
* 练习 1.8 指出下列哪些输出语句是合法的（如果有的话）：
    ```
    #include <iostream>

    int main()
    {
        std::cout << "/*"; // 对
        std::cout << "*/"; // 对
        std::cout << /* "*/" */; // ❌
        std::cout << /* "*/" /* "/*" "*/; // 对
        return 0;
    }
    ```
    正确答案
    ```
    #include <iostream>

    int main()
    {
        std::cout << "/*";
        std::cout << "*/";
        std::cout << /* "*/" */";
        std::cout << /* "*/" /* "/*" "*/;
        return 0;
    }
    ```

# 1.3 注释简介
  

  