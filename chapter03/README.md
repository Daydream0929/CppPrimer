# 3.1 命名空间的 using 声明

# 3.2 标准库类型 string

## 3.2.1 定义和初始化 string 对象
* 直接初始化和拷贝初始化
拷贝初始化:使用等号（🟰）初始化一个变量
直接初始化:不使用等号（🟰）初始化一个变量
    ```
    string s1 = "hiya"; // 拷贝初始化
    string s2("hiya"); // 直接初始化
    string s3(10, 'c'); // 直接初始化
    ```

## 3.2.2 string 对象上的操作
* 读取 string 对象
    ```
    int main()
    {
        string s;
        cin >> s;  // 将 string 对象读入 s， 遇到空白停止
        cout << s << endl;
        return 0;
    }
    ```

* 读取未知数量的 string 对象
    ```
    int main()
    {
        string word;
        while (cin >> word)
            cout << word << endl;
        return 0;
    }
    ```

* 使用 getline 读取一整行
    ```
    int main()
    {
        string line;
        while (getline(cin, line))
            cout << line << endl;
        return 0;
    }
    ```

* string::size_type 类型

    ```
    auto len = line.size(); // len 的类型是 string::size_type
    ```
    size 函数返回的是一个无符号整型数，因此切记，如果在表达式中混用了带符号数和无符号数将可能产生意想不到的结果。假如，假设 n 是一个具有负值的 int， 则表达式 s.size() < n 的判断结果几乎肯定是 true。因为负值 n 会自动🉐️转化成一个比较大的无符号值

* 比较 string 对象

    ```
    string str1 = "Hello";
    string str2 = "Hello World";
    string str3 = "Hiya"
    str3 > str2 > str1 // 字典序
    ```

* 为 string 对象赋值

* 俩个 string 对象相加
    ```
    string s1 = "hello", s2 = "world";
    string s3 = s1 + ", " + s2 + '\n';
    string s4 = s1 + ", ";   // ✅
    string s5 = "hello" + ", "; // ❌
    string s6 = s1 + ", " + "world"; // ✅
    string s7 = "hello" + ", " + s2; // ❌
    必须确保 + 的俩侧的运算对象至少有一个是 string
    ```

## 3.2.3 处理 string 对象中的字符
* cctype 头文件中的函数
    ```
    isalnum(c)  // 当 c 是字母或数字时为真
    isalpha(c)  // 当 c 是字母时为真
    iscntrl(c)  // 当 c 是控制字符时为真
    isdigit(c)  // 当 c 是数字时为真
    isgraph(c)  // 当 c 不是空格但可打印时为真
    islower(c)  // 当 c 是小写字母时为真
    isprint(c)  // 当 c 是可打印字符时为真
    ispunct(c)  // 当 c 是标店符号时为真
    isspace(c)  // 当 c 是空白时为真
    isupper(c)  // 当 c 是大写字母时为真
    isxdigit(c) // 当 c 是十六进制数字时为真
    tolower(c)  // 当 c 是大写字母时，转化为对应的小写字母，否则不变
    toupper(c)  // 当 c 是小写字母时，转化为对应的大写字母，否则不变
    ```

# 3.3 标准库类型 vector