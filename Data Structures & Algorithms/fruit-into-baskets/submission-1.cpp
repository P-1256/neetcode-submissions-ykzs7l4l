class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp(3);
        int right=0, left=0, maxFruits=0;

        while(right<fruits.size()){
            mp[fruits[right]]++;

            if(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }

        
            //maxFruits=max(maxFruits, );

            right++;
        }

        return fruits.size()-left;;
    }
};