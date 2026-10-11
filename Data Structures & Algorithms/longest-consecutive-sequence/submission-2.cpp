class Solution {
public:

    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        map<int, int> mp;
        int maxCt=0;

        for(int i=0; i<n; i++) mp[nums[i]]++;

        for(int i=0; i<n; i++){

            if(!mp.count(nums[i]-1)){
                int num=nums[i];
                int ct=1;
                while(mp.count(num+1)){
                    num++;
                    ct++;
                }
            
                maxCt = max(maxCt, ct);
            }
        }
        
        return maxCt;
    }
};
