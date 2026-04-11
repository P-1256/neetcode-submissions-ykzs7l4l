class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long num=0;
        int tempX=x;
        while(tempX!=0){
            int digit = tempX%10;
            num = (num*10)+(long long)digit;
            tempX/=10;
        }
        return num==x;
    }
};