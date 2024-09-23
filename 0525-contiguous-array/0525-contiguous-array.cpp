class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = INT_MIN;
        int temp = 0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0) temp--;
            if(nums[i] == 1) temp++;
            
            if(temp ==0 )
            {
                
                ans = max(ans,i-0+1);
            }
            else if(m.find(temp) != m.end())
            {
                ans = max(ans,i-m[temp]);
            }
            else {
                m[temp] = i;
            }
        }
        return ans == INT_MIN ? 0 : ans;
    }
};