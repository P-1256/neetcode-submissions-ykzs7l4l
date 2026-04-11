class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> toPass;
        int rot=k;
        if(k>nums.size()-1){
            rot=k%nums.size();
        }

        int n=nums.size();
        int j=n-rot;
        int l=0;
        for(int i=0; i<nums.size(); i++){
            if(i<rot){
                toPass.push_back(nums[j]);
                j++;
            }else{
                toPass.push_back(nums[l]);
                l++;
            }
        }
        nums=toPass;
    }
};