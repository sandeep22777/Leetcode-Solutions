class Solution {
public:
    vector<string> count(vector<string>& words)
    {
       vector<string> ans;
        
        unordered_map<char,int>v;
        
        for(char i='a';i<= 'z';i++)
        {
            v[i] = 100;
        }
        
        for(int i=0;i<words.size();i++)
        {
            unordered_map<char,int> m;
            string s = words[i];
            for(int j=0;j<s.size();j++)
            {
                m[s[j]]++;
            }
            
            for(char mm = 'a';mm <= 'z'; mm++)
            {
                v[mm] = min(v[mm], m[mm]);
            }
        }
        
        for(char i='a';i<= 'z';i++)
        {
            char temp = i;
            while(v[temp]>0)
            {
                ans.push_back(string(1,temp));
                v[temp]--;
            }
        }
        return ans;
    }
    
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans = count(words);
        return ans;
    }
};