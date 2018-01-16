/*
 * stl_string_use.cpp
 *
 *  Created on: Jan 10, 2018
 *      Author: wangwei69
 */

#include "test_main.h"
using namespace std;

void string_use_test() {

    //string::find()函数使用,函数原型如下：

    /*
     *  string (1)    size_t find (const string& str, size_t pos = 0) const noexcept;
     *  c-string (2)    size_t find (const char* s, size_t pos = 0) const;
     *  buffer (3)  size_t find (const char* s, size_t pos, size_type n) const;
     *  character (4)   size_t find (char c, size_t pos = 0) const noexcept;
     *
     */

    std::string str("There are two needles in this haystack with needles.");
    std::string str2("needle");

    // different member versions of find in the same order as above:
    std::size_t found = str.find(str2);  //从下标0开始搜索，找到后返回第一个匹配位置
    if (found != std::string::npos)
        std::cout << "first 'needle' found at: " << found << '\n';

    found = str.find("needles are small", found + 1, 6); //只需要needle这6个字符匹配即可
    if (found != std::string::npos)
        std::cout << "second 'needle' found at: " << found << '\n';

    found = str.find("haystack");
    if (found != std::string::npos)
        std::cout << "'haystack' also found at: " << found << '\n';

    found = str.find('.');
    if (found != std::string::npos)
        std::cout << "Period found at: " << found << '\n';

    // let's replace the first needle:
    str.replace(str.find(str2), str2.length(), "preposition"); //下标位置pos，开始替换长度length字符串
    std::cout << str << '\n';

}


