class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
         vector<vector<int> > result;  
            sort(nums.begin(),nums.end());
            
            if(nums.size()<3) return result;
            if(nums[0] >0) return result;
            
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i] >0) break;
                    
                    if(i>0 && nums[i] == nums[i-1]) continue;
                    
                    int s = i+1,end = nums.size()-1;
                    int sum =0;
                    while(s<end)
                    {
                            sum  = nums[i]+ nums[s] + nums[end];
                            if(sum>0)
                            {
                                        end--;
                            }
                            else if(sum<0)
                            {
                                    s++;
                            }
                            else
                            {
                                    result.push_back({nums[i],nums[s],nums[end]});
                                    int low = nums[s];
                                    int high = nums[end];
                                    
                                    while(s<end && nums[s] == low) s++;
                                    while(s<end && nums[end] == high) end--;
                            }
                            
                            
                    }
            }
            
     
            return result;
            
            
    }
};