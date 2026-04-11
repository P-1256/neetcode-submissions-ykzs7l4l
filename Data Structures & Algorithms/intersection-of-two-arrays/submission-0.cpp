class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
            unordered_set<int> ansSet;
            sort(nums1.begin(), nums1.end());
            for(int num: nums2){

                int l=0;
                int r=nums1.size()-1;
                while(l<=r){
                    int mid = (l+r)/2;
                    if(nums1[mid]==num){
                        ansSet.insert(num);
                        break;
                    }
                    

                    else if(nums1[mid]>num) r=mid-1;
                    else l=mid+1;
                }

            }

        return vector<int>(ansSet.begin(), ansSet.end());
    }
};