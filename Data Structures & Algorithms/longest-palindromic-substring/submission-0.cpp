class Solution {
public:

    vector<int> expPelin(string& s, int pl, int pr){

        int l=pl, r=pr;
        int n = s.size();

        while(l>=0 && r<n){
            if(s[l] != s[r]) break;
            l--;
            r++;
        }

        return {l+1, r-1};
    }

    string longestPalindrome(string s) {
        
        int n = s.size();
        int l=0, r=0;

        for(int i=0; i<n; i++){

            vector<int> a = expPelin(s, i, i);
            vector<int> b = expPelin(s, i, i+1);

            if(a[1]-a[0]> r-l){
                l=a[0];
                r=a[1];
            }
            if(b[1]-b[0]> r-l){
                l=b[0];
                r=b[1];
            }
        }

        return s.substr(l, r-l+1);
    }
};
