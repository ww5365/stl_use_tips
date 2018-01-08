/*
 * regx_stl_use.cpp
 *
 *  Created on: Jan 6, 2018
 *      Author: wangwei69
 */


/*
 * 正则表达式的使用：c++ 11 提供了正则表达式库，原来是在boost::regex库中
 *
 * 一个str是否是满足某个模式匹配的串，通过正则表达式来判定；
 * 比如：
 * ab.cpp 满足 *.cpp 这种模式匹配规则
 *
 * regex：regular expression
 *
 * 1、typedef basic_regex<char>    regex; //regex是basic_regex类实例化。stl头文件定义；
 *
 * 2、初始化构造函数，请参考下面源代码
 */

#include "test_main.h"
#include <regex>

using namespace std;


int regex_use_test(){

    std::string file_name = "abcd.cpp";
    std::string pattern = "[a-z]*.cpp"; //注意：*.cpp形式的，把*放在前面的情况，regex不支持；

    //下面是regex这个类的几种构造方式

    std::regex first;           // default
    std::regex second = first;  // copy
    std::regex third (pattern); // string object initialization
    std::regex fourth ("<[^>]>"); // string literal initialization
    std::regex fifth (pattern.begin(),pattern.end()); // range initialization
    std::regex seventh ("[0-9A-Z]+", std::regex::ECMAScript);// with syntax option；默认语法就是：ECMAScript
    using namespace std::regex_constants;  //std::regex_constants::grep                   // introducing constants namespace
    std::regex eighth ("[0-9A-Z]+", ECMAScript);             // same as seventh
    std::regex ninth ("\\bd\\w+", ECMAScript | icase );      // multiple flags ；限定语法 和 大小写不敏感

    std::string subject = "123 the duck A";
    std::string replacement = "yup";

    //std::regex_replace(str,pattern,replament)模式匹配subject中字符串，匹配上了，用replacement替换掉;返回替换后的整体字符串
    std::cout << std::regex_replace (subject, eighth, replacement) <<std::endl;

    if (std::regex_match(file_name, third)){
        cout << file_name << " :match the pattern: " << pattern <<endl;
    }

    std::cout << std::endl;
    return 0;

}





