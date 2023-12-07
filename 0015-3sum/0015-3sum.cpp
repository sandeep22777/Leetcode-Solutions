class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > result;  
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return {};
        if(nums[0] > 0) return {};
        int sum = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            int fix = nums[i];
            int low= i+1;
            int high = nums.size()-1;
            
            if(i>0 && nums[i]== nums[i-1]) continue;
            
            while(low<high)
            {
                int sum = nums[i] + nums[low] + nums[high];
                if(sum < 0)
                {
                    low++;
                }
                else if(sum > 0)
                {
                    high--;
                }
                else {
                    result.push_back({nums[i],nums[low],nums[high]});
                    int low_occ = nums[low], high_occ = nums[high];
                    while(low<high && nums[low] == low_occ) low++;
                    while(low<high && nums[high] == high_occ) high--;
                    
                }
            }
        }
        return result;
    }
};