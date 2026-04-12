class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> array;
        int len = nums.size();
        for(int i=0; i<len; i++){
            array.push_back({nums[i],i});
        }
        sort(array.begin(), array.end());

        int l=0, r=len-1;
        while(l<r){
            int sum =array[l].first + array[r].first;
            
            if(sum==target){
                return {min(array[l].second, array[r].second),
                        max(array[l].second, array[r].second)};
            }
            else if(sum<target){
                l++;
            }
            else{
                r--;
            }

        }
        return {};
    }
};
