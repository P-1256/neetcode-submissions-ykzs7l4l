class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> stk;
        vector<int>ans;

        for(int num: asteroids){
            int val = abs(num);

            if(num<0){
                while(!stk.empty() && stk.back()>0 && stk.back()<val) stk.pop_back();
                
                if(!stk.empty() && stk.back() == val) stk.pop_back();
                else if(stk.empty() || stk.back()<0) stk.push_back(num);
            }
            else{
                stk.push_back(num);
            }

        }

        return stk;
    }
};