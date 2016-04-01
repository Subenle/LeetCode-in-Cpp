/*
Solution:

3^x=n
log(3^x) = log(n)
x log(3) = log(n)
x = log(n) / log(3)

We need to 
largest number power of 3, is 1162261467, we can use this to calculate the float precision. 0.0000000001 at least
Math.log(1162261468)/log(3)
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        double res = log(n)/log(3);  
        return abs(res - rint(res))< 0.0000000001;
    }
};
