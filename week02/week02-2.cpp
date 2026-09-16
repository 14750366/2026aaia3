/// week02-2.cpp 要使用 命名空間
#include <iostream> ///上週交的
#include <string> ///今天新教的
using namespace std; ///使用 std 命名空間
int main()
{ /// 就不用寫一堆std::
    cout << "請輸入你名字";
    string name; ///使用標準的字串
    cin >> name;
    cout << name << "你好,你會用字串了";
}
