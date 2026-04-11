class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num:nums){
            mp[num]++;
        }

        int largest=0;
        int largestNum=0;
        for(int i=0; i<nums.size(); i++){
            largest=max(largest, mp[nums[i]]);
            if(largest>nums.size()/2){
                return nums[i];
            }
        }
        return 0;
    }
};