//week12-1b.cpp SOIT106_Advance_011
#include <iostream>
using namespace std;
//把二進位,轉乘十進位
int main ()
{
   char s[10];
   cin >> s;
   int ans = 0;
   for (int i=0;i<4; i++) {
   		ans = ans * 2;
   		if (s[i]=='1') ans += 1;
   	}
   	cout << ans << "\n";
}
