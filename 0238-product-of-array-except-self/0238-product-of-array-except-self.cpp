class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
        int s = nums.size();
        
        vector<int> v(s,1);
        int prefix = 1;
        
        for(int i=0;i<nums.size();i++)
        {
            v[i] = prefix;
            prefix = prefix * nums[i];
        }
        
        int postfix = 1;
        for(int i= s-1;i>=0;i--)
        {
            v[i] = v[i] * postfix;
            postfix = postfix * nums[i];
        }
        
        return v;
    }
};