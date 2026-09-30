/// week04-2good.cpp 這程式是對的 用進階C++迴圈
///但在CodeBlocks 出錯 waring: range-based for only availabe with ...
///2011年之後, 只有在 - stf=C++11 或 -std=gmu++11才能用
///所以,需要改一下設定 Setting-Compiler....
///選第二個 使用 c++11 ISO 國際標準的c++ u,也就是 -std=C++11
//下面是 week04 的小考題目SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int now;
    for (int i=0; i<20; i++) {
        cin >> now;
        if (now==0) break;
        a.push_back (now);
    }
    cin >> now;
    int ans = 0;
    for (int num : a ) { ///在CodeBlocks 設定出錯時,永遠跑不出答案
        if (num==now) ans++;
    }
   cout << ans << "\n";
}
///截圖時, 請把 Build messages 裡面藍色的 waring 他截圖近來
