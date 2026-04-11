class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> toRot;
        vector<int> toPass;
        int rot=k;
        if(k>nums.size()-1){
            rot=k%nums.size();
        }

        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(i<n-rot){
                toPass.push_back(nums[i]);
            }else{
                toRot.push_back(nums[i]);
            }
        }
        int r=0;
        int p=0;
        for(int i=0; i<nums.size(); i++){
            if(i<rot){
                nums[i]=toRot[r];
                r++;
            }else{
                nums[i]=toPass[p];
                p++;
            }
        }
    }
};