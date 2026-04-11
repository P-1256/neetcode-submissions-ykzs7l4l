class Solution {
public:
    int arrangeCoins(int n) {
        int temp =n;
        int i=1;
        int count=0;
        while(temp>=i){
            temp-=i;
            count++;
            i++;
        }
        return count;
    }
};