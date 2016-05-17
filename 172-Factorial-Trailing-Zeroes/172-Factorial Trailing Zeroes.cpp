/*  Learn more about Trailing zero
    https://en.wikipedia.org/wiki/Trailing_zero
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int ret = 0;
        while(n)
        {
            ret += n/5;
            n /= 5;
        }
        return ret;
    }
};
