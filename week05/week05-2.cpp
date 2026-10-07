//week05-2.cpp 學習計畫 Built-in Functuon 第二題
//LeetCode 7093 To Lower Case 大寫變小寫
//LeetCode 很貼心, 幫你把 #include <cctype> 偷偷寫好了
class Solution {
public:
    string toLowerCase(string s) {
        // s[0] = 'h';//不用寫這行,只是s[i]可改
        for (int i=0; i<s.length(); i++) {
            //以前 if (s[i]>='A' && s[i]<='Z') s[i] = s[i] - 'A' + 'a';
            //以前 if( isupper(s[i]) ) s[i] = s[i] - 'A' + 'a';
            s[i] = tolower(s[i]); //前面要記的 #include <cctype>
        }
        return s;
    }
};
