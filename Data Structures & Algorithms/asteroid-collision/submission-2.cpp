class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> stk;
        vector<int>ans;

        for(int num: asteroids){
            int val = abs(num);

            if(num<0){
                while(!stk.empty() && stk.top()<val) stk.pop();
                if(!stk.empty() && stk.top() == val){
                    stk.pop();
                    continue;
                }
                else if(stk.empty()) ans.push_back(num);
            }
            else{
                stk.push(num);
            }

        }

        int i = ans.size(); 
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin()+i, ans.end());

        return ans;
    }
};