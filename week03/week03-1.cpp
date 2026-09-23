// week03-1.cpp 學習計畫 Basic 地8題
// LeetCode 1822. Sign of the Product of an Array
//
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N = nums.size(); //陣列的 . size 大小
        int neg = 0; //富庶有幾個?迴圈前面,一開始0個
        for (int num : nums) { //C++進階for迴圈
            if (num==0) return 0; //只要任意個是0乘後變0
            if (num<0) neg++; //遇到負數
        }
        if (neg % 2==0) return 1; //有偶數個負數 負負得正
        return -1; //負的
        //int ans = 1;// 迴圈前面ans 是1方便繼承
        //for (int i=0; i<N ; i++) {//迴圈 nums[i]逐一乘起來
          //   ans =ans * nums[1];

        //if (ans>0) return 1;
        //if (ans<0) return -1;
        //return 0;
    }
};
