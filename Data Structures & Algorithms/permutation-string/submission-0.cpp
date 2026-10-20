class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n1 = s1.size();
        int n2 = s2.size();

        vector<int> freq(26, 0);
        for(int i=0; i<n1; i++) freq[s1[i]-'a']++;

        int l=0, r=0;
        while(r<n2){
            freq[s2[r]-'a']--;
            if(r-l+1>n1){
                freq[s2[l]-'a']++;
                l++;
            }

            if(r-l+1 == n1){
                bool isPermute = true;
                for(int i=0; i<26; i++){
                    if(freq[i] != 0) isPermute = false;
                }

                if(isPermute) return true;
            }
            r++;
        }

        return false;
    }
};
