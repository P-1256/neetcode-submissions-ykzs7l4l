class Solution {
public:
    int reverse(int x) {
        int sign = (x<0)? -1 : 1;
        int num=0;
        while(x!=0){
            int digit = x%10;
            long long nm= (long long)num*10+digit;
            if(sign==1 && nm>INT_MAX) return 0;
            if(sign==-1 && nm<INT_MIN) return 0;

            num=nm;
            x/=10;
        }

        return num;
    }
};
