/*
方法3： 判断n的二进制中1的个数
*/
bool isPowerOfTwo(int n) {  
    int count = 0;  
    while (n > 0)  
    {  
        count+=(n&0x01);
        n>>=1;  
    }  
    return count==1;
}
