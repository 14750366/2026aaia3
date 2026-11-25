//week12-1a.cpp SOIT106_Advance_011
#include <iostream>
using namespace std;
//把二進位,轉乘十進位
int main ()
{
	char s[10];
	cin >> s;
	int ans = 0;
	if (s[0]=='1') ans+= 8;
	if (s[1]=='1') ans+= 4;
	if (s[2]=='1') ans+= 2;
	if (s[3]=='1') ans+= 1;
	cout << ans << "\n";
}
