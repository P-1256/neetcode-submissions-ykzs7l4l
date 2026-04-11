class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num: nums){
            mp[num]++;
        }

        vector<pair<int, int>> arr;
        for(const auto& pair: mp){
          arr.push_back({pair.second, pair.first});
        }
        sort(arr.rbegin(), arr.rend());

        vector<int> result;
        for(int i=0; i<k; i++){
            result.push_back(arr[i].second);
        }
        return result;
    }
};
