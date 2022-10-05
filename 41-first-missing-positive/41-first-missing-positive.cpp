class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
            for(auto i : nums) m[i] = 0;
            
            sort(nums.begin(),nums.end());
            int s = nums[nums.size()-1];
            int ans;
            bool flag= false;
            
            int i;
            for( i=1;i<=s;i++)
            {
                    if(m.find(i) == m.end())
                    {
                          flag = true;  
                            ans = i;
                            break;
                    }
            }
            
            if(flag == true) return ans;
            else return i;
          //  return ans;
            
    }
};