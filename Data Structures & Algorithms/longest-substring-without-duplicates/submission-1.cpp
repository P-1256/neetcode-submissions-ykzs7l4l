class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> container;
    int left = 0;
    int right = 0;
    int maxLen=0;
    while(right<s.size()){
        if(!container.count(s[right])){
            container.insert(s[right]);
            maxLen=max(maxLen, right-left+1);
            right++;
        }else{
            maxLen=max(maxLen, right-left);
            container.erase(s[left]);
            left++;
        }
    }
    return maxLen;
    }
};
