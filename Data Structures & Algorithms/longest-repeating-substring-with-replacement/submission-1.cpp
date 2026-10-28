class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        vector<int>fq(26, 0);
        int l=0, r=0;
        int maxLen =0;
        
        while(r<n){
            fq[s[r]-'A']++;
            int maxFq =0;
            for(int i=0; i<26; i++) maxFq= max(maxFq, fq[i]);

            int otherFq =r-l+1-maxFq;
            if(k < otherFq){
                fq[s[l]-'A']--;
                l++;
            }
            else maxLen = max(maxLen, maxFq+min(otherFq, k));

            r++;
        }

        return maxLen;
    }
};
