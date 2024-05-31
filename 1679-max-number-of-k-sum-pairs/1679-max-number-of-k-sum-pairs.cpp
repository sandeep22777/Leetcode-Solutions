class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int ans =0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(k-nums[i]) == m.end())
            {
                m[nums[i]]++;
            }
            else {
                if(m[k-nums[i]] == 1)
                {
                    m.erase(k-nums[i]);
                }
                else m[k-nums[i]]--;
                ans++;
                cout<< k-nums[i]<< " "<< nums[i]<<endl;
            }
        }
        
        return ans;
    }
};