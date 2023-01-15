- [1.1 编写一个简单的 C ++ 程序](#11-编写一个简单的-c--程序)
  - [1.1.1 编译 运行程序](#111-编译-运行程序)
- [1.2 初识输入输出](#12-初识输入输出)
- [1.3 注释简介](#13-注释简介)
- [1.4 控制流](#14-控制流)
  - [1.4.1  while语句](#141--while语句)
  - [1.4.2 for 语句](#142-for-语句)
  - [1.4.3 读取数量不定的输入数据](#143-读取数量不定的输入数据)
  - [1.4.4 if 语句](#144-if-语句)
- [1.5 类简介](#15-类简介)


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

# 1.3 注释简介
* 单行注释 `//`
* 多行注释 `/* */`<br>

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
        std::cout << "/*"; // ✅
        std::cout << "*/"; // ✅
        std::cout << /* "*/" */; // ❌
        std::cout << /* "*/" /* "/*" "*/; // ✅
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
# 1.4 控制流
## 1.4.1  while语句
* while 语句
    ```
    while (condition)
        statement
    ```
* 练习 1.9 编写程序，使用 while 循环将 50 到 100 的整数相加
    ```
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
    ```
* 练习 1.10 除了++运算符将运算对象的值增加 1 之外，还有一个递减运算符（--）实现将值减少1。编写程序，使用递减运算符在循环中按递减顺序打印出 10 到 0 之间的整数。
    ```
    #include <iostream>

    int main()
    {
        int condition = 10;
        while (condition > -1) {
            std::cout << condition << std::endl;
            condition --;
        }
        return 0;
    }
    ```
* 练习 1.11 编写程序，提示用户输入俩个整数，打印出这俩个整数所指定的范围内的所有整数。
    ```
    #include <iostream>

    int main()
    {
        int a, b;
        std::cin >> a >> b;
        while (a <= b) {
            std::cout << a << std::endl;
            a ++;
        }
        return 0;
    }
    ```

## 1.4.2 for 语句
* for 循环
    ```
    for (init-statement; condition; expression)
        statement
    ```
* 练习 1.12 下面的 for 循环完成了什么功能 ？sum 的终值是多少 ？
    ```
    int sum = 0;
    for (int i = -100; i <= 100; ++ i)
        sum += i;
    ```
    累加 [-100, 100] 内所有整数之和。 终值sum = 0
* 练习 1.13 使用 for 循环 重做 1.4.1 节中的所有练习
    ```
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
    ```
* 练习 1.14 对比 for 循环 和 while 循环， 两种形式的优缺点各是什么 ？
    ```
    for 循环
    循环控制变量的初始化和修改都放在语句头部分，书写形式较简洁，且适用于循环次数已知的情况。在循环语句中定义一个局部变量，循环结束后，局部变量就被释放了。
    while 循环
    循环控制变量的初始化一般放在while语句之前，循环控制变量的修改一般放在循环体中，形式上不如for语句简洁，但它比较适用于循环次数不易预知的情况（用某一条件控制循环）
    ```
* 练习 1.15 编写程序，包含第 14 页“ 再探编译〞中讨论的常见错误。熟悉编详器生成的错误信息

## 1.4.3 读取数量不定的输入数据
* 练习 1.16 编写程序，从 cin 读如一组数，输出其和
    ```
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
    ```
## 1.4.4 if 语句
* 练习 1.17 如果输入的所有值都是相等的，本节的程序会输出什么 ? 如果没有重复值，输出又会是怎样的 ?
    ```
    "a" occurs "cnt" times // a 出现了 cnt 次
    ```
* 练习 1.18 编译并运行本节的程序，给它输入全都相等的值。再次运行程序，输入没有重复的值。
    ```
    #include <iostream>

    int main()
    {
        int currVal = 0, val = 0;
        if (std::cin >> currVal) {
            int cnt = 1;
            while (std::cin >> val) {
                if (val == currVal) {
                    ++ cnt;
                } else {
                    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                    currVal = val;
                    cnt = 1;
                }
            }
            std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        }
        return 0;
    }
    ```
* 练习 1.19 修改你为 1.4.1 节练习 1.10 (第 11 页) 所编写的程序 (打印一个范围内的数)，使其能处理用户输入的第一个数比第二个数小的情况.
    ```
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
    ```
# 1.5 类简介
* 练习 1.20 在网站 http://www.informit.com/title/0321714113 上， 第 1 章的代码目录中包含了头文件 Sales_item.h。将它拷贝到你自己的工作目录中。用它编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。
* 练习 1.21 编写程序，读取两个 ISBN 相同的 sales_item 对象，输出它们的和。
* 练习 1.22 编写程序，读取多个具有相同 ISBN 的销售记录，输出所有记录的 和 。
* 练习 1.23 编写程序，读取多条销售记录，并统计每个 ISBN (每本书)有几条销售记录。
* 练习 1.24 输入表示多个ISBN的多条销售记录来测试上一个程序，每个 ISBN 的记录应该聚在一起。
* 练习 1.25 借助网站上的 Sales_item.h 头文件 ，编译并运行本节给出的 书店程序 。 
  
* 小结
