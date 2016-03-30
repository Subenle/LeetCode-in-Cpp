/*
判断一个数是否是2的幂，判断方法主要依据2的N次幂的特点：仅有首位为1，其余各位都为0.
方法1： n & n-1 == 0
*/
class Solution {  
public:  
    bool isPowerOfTwo(int n) {  
        return (n>0) && (!(n&(n-1)));  
    }  
};
