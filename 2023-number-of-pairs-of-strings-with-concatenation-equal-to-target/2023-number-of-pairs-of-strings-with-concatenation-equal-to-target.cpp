class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count =0;
        int targetl = target.size();
        unordered_map<string,int> m;
        
        for(auto suf : nums) m[suf]++;
        
        for(auto pre : nums)
        {
            int prel = pre.size();
            if(target.substr(0,prel) == pre)
            {
                string suff = target.substr(prel);
                if(m.find(suff) != m.end())
                {
                    count += (pre == suff) ? m[suff]-1 : m[suff];
                }
            }
        }
        return count;
    }
};