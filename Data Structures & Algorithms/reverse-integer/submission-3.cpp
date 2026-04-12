class Solution {
public:
    int reverse(int x) {

        int num=0;
        while(x!=0){
            int digit = x%10;
            long long nm= (long long)num*10+digit;
            if(nm>INT_MAX || nm<INT_MIN) return 0;

            num=nm;
            x/=10;
        }

        return num;
    }
};
