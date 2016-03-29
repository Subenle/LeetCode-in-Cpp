class Solution {
public:
    int majorityElement(vector<int>& nums) {
	int numslen = nums.size();
	if (numslen == 1) return nums[0];
	map<int, int> mymap;
	for (int i = 0; i<numslen; i++) {
		if ((mymap.insert({ nums[i],1 })).second == false) {
			mymap[nums[i]]++;
			if (mymap[nums[i]]>numslen / 2)
				return nums[i];
		}
	}
	return NULL;
}
};
