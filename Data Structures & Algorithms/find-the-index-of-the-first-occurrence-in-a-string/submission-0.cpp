
class Solution {
public:
    int strStr(string haystack, string needle) {
        unordered_map<string, string> mp;
        string word;
        int l=0;
        int r=needle.size()-1;
        while(r<haystack.size()){
            string s="";
            for(int i=l; i<=r; i++){
                s+=haystack[i];
            }
            if(s==needle) return l;
            l++;
            r++;
        }

        return -1;

    }
};