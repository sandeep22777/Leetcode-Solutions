class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        
        vector<vector<string>>  v;
        unordered_map<string,vector<string>> m;
        
        for(int i=0;i<str.size();i++)
        {
            string temp = str[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(str[i]);
        }
        
        for(auto it  = m.begin();it!= m.end();it++)
        {
            v.push_back(it->second);
        }
      
        
        return v;
    }
};