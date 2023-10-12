class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int  i = 0;
        int j = height.size()-1;
        while(i<j)
        {
            int temp = min(height[i], height[j]);
            int sum = abs(i-j)  * temp;
            ans = max(ans,sum);
            height[i] < height[j] ? i++ : j--;
        }
        return ans;
    }
};