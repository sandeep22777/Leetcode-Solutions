class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
            unordered_map<int,int> m;
            
            for(int i=1;i<=nums.size();i++)
            {
                    m[i]=0;
            }
            
            
            for(int i=0;i<nums.size();i++)
            {
                    m[nums[i]]++;
            }
            
            vector<int> v;
            for(auto it  =m.begin();it!= m.end();it++)
            {
                    if(it->second == 0) v.push_back(it->first);
            }
            
            return v;
            
    }
};