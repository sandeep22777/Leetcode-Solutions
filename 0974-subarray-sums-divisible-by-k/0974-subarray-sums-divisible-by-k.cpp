class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
              
         unordered_map<int,int> m;
        m[0] =1;
        int count=0;
        int cur=0;
        for(int i=0;i<nums.size();i++)
        {
            cur += nums[i];
            if(cur < 0) cur = cur%k + k;
            if(m.find(cur%k) != m.end())
            {
                count += m[cur%k];
            }
            
            m[cur%k]++;
        }
        
        return count;
        
              
//          unordered_map<int,int> m;
//         m[0] = 1;
//         int count = 0;
        
//         int pre = 0;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             pre += nums[i];
//             int temp = pre%k;
//            // if(pre == 0) count++;
//             if(temp < 0) temp += k;
//             if(m.find(temp) != m.end())
//             {
//                 count += m[temp];
//             }
//             m[temp]++;
//         }
//         return count;
    }

};