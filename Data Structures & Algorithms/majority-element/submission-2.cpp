class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int curr=nums[0];
        for(int i=0; i<nums.size(); i++){
            if(count==0 || nums[i]==curr){
                curr=nums[i];
                count++;
            }
            else{
                count--;
            }
            //else count++;
        }

        return curr;
    }
};