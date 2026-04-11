class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int multiply=1;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i!=j){
                    multiply=multiply*nums[j];
                }
                
            }
            ans.push_back(multiply);
                multiply=1;
        }
        return ans;
    }
};
