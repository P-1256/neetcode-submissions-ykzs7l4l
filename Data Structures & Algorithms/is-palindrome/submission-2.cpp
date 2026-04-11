class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char c: s){
            if(c<=122 && c>=97 || c<=57 && c>=48){
                str+=c;
            }
            else if(c<=90 && c>=65){
                str+=(c+32);
            }
        }
        int n= str.length();
        int back=n-1;
        for(int i=0; i<n/2; i++){
            if(str[i] != str[back]){
                return false;
            }
            back--;
        }
        return true;
    }
};
