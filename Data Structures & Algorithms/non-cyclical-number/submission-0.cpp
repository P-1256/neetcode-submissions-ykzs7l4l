class Solution {

private:
int sumDigit(int n){
    int sum=0;
    while(n>0){
        int dig=n%10;
        sum=sum+(dig*dig);
        n/=10;
    }
    return sum;
}

public:
    bool isHappy(int n) {
        unordered_map<int, int> freq;
        while(true){
            int curN = sumDigit(n);
            if(curN==1) return true;
            else if(freq.count(curN)) return false;
            freq[curN]++;
            n=curN;
        }
        return false;
    }
};