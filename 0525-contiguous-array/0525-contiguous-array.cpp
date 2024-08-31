class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int> m;
        int count = 0;
        int cur =0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 1) cur+=1;
            else cur -= 1;
            
            if(cur == 0)
            {
                count = max(cur,i-0+1);
            }
            if(m.find(cur) != m.end())
            {
                count = max(count,i-m[cur]);
            }
            else {
                 m[cur] = i;
            }
           
        }
        return count;
    }
};