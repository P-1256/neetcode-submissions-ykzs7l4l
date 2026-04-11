class Solution {
public:
    int maxArea(vector<int>& height) {
        int back=height.size()-1, front=0, area =0;
        while(front<back){
            area=max(area,(min(height[front], height[back])*(back-front)));

            if(height[front]<height[back]){
                front++;
            }else{
                back--;
            }
        }
        return area;
    }
};