class Solution {
public:
    bool isPowerOfFour(int num) {
        int count = 0;  
        int loop = 0;
        while (num > 0)  
        {  
            count+=(num&0x01);
            loop++;
            num>>=1;  
        }  
        return count==1 && loop%2==1;
    }
};
