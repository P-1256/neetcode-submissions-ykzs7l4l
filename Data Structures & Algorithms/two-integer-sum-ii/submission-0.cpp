class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int back=n-1;
        int front=0;
        int sum=0;
        while(front<back){
            sum=numbers[front]+numbers[back];
            if(sum==target){
                return {front+1, back+1};
            }
            else if(sum<target){
                front++;
            }else{
                back--;
            }
        }
        return {};
    }
};