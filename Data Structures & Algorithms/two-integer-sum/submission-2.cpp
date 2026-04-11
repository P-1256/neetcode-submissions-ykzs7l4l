class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /* unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=i;
        }

        for(int i=0; i<nums.size(); i++){
            int diff=target-nums[i];
            if(mp.count(diff) && mp[diff] != i){
                return{i,mp[diff]};
            }
        }

        return{};
        */

        vector<pair<int,int>> pr;

    for(int i = 0; i < nums.size(); i++){
        pr.push_back({nums[i], i});
    }

    sort(pr.begin(), pr.end());

    int l = 0;
    int r = nums.size() - 1;

    while(l < r){
        int sum = pr[l].first + pr[r].first;

        if(sum == target){
            return {
                min(pr[l].second, pr[r].second),
                max(pr[l].second, pr[r].second)
            };
        }
        else if(sum < target){
            l++;
        }
        else{
            r--;
        }
    }

    return {};
    }
};