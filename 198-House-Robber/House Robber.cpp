class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len==0) return 0;
        vector<int> sums;
        sums.push_back(nums[0]);
        for(int i=1;i<len;i++){
            if(i>1){
                sums.push_back(max(sums[i-1],sums[i-2]+nums[i]));
            }else{
                sums.push_back(max(sums[i-1],nums[i]));
            }
            
        }
        return sums[len-1];
    }
};
