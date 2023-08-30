class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int x;
        
     unordered_map<int,int> m;
        for(auto i : nums) m[i]++;
        for(auto i: nums)
        {
            if(m[i] == 1){
                
             x = i; 
            break;
            }
        }
        return x;
    }
};