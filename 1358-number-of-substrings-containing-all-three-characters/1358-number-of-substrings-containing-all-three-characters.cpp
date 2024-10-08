class Solution {
public:
     int findatmostk(string nums,int k)
    {
        int i=0;
        int j =0;
        int ans =0;
        unordered_map<int,int>m;
        for(int j=0;j<nums.size();j++)
        {
            m[nums[j]]++;
            while(m.size() > k)
            {
                m[nums[i]]--;
                if(m[nums[i]] == 0) m.erase(nums[i]);
                i++;
            }
            
            ans += j-i+1;
        }
        
        return ans;
    }
    
    int numberOfSubstrings(string s) {
//         int ans= 0;
//         int i=0;
//         unordered_map<char,int> m;
//         string cur;
//         for(int j=0;j<s.size();j++)
//         {
//             m[s[j]]++;
            
//         }
      //   int atmostk = findatmostk(s,3);
      // int atmostk2 = findatmostk(s,2);
      //   return atmostk - atmostk2;
         int ans= 0;
        unordered_map<char,int> m;
        int j=0;
        int len = s.size();
        for(int i=0;i<len;i++)
        {
            m[s[i]]++;
            while(m.size() == 3)
            {
                ans += len-i;
                m[s[j]]--;
                if(m[s[j]] == 0)
                {
                    m.erase(s[j]);
                }                
                j++;
            }
           
        }
        return ans;
    }
};