class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int n= people.size();
                if(n==1)return 1;
                        sort(people.begin(), people.end());
                                int l=0;
                                        int r=n-1;
                                                int ans=0;
                                                        while(l<=r){
                                                                    if(people[r]+people[l]<=limit){
                                                                                    l++;
                                                                                                    r--;
                                                                                                                }
                                                                                                                            else r--;
                                                                                                                                        ans++;
                                                                                                                                                }
                                                                                                                                                        //(i<n)ans+=(n-i+1);
                                                                                                                                                                
                                                                                                                                                                        return ans;
                             
                                      
                                          
                                                        
                                                        
                                                                            
                                                                                        
                                                                                           
    }
};