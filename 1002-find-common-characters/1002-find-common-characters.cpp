class Solution {
public:
    vector<string> count(vector<string>& words)
    {
       vector<string> ans;
        
       unordered_map<char,int> m;
        for(char i = 'a'; i<='z';i++)
        {
            m[i] = 100;
        }
        
        for(int i=0;i<words.size();i++)
        {
            string temp = words[i];
            unordered_map<char,int> t;
            for(int j = 0;j<temp.size();j++)
            {
                t[temp[j]]++;
            }
            
            for(char com = 'a';com <= 'z';com++)
            {
                m[com] = min(t[com],m[com]);
            }
        }
        for(char i='a';i<='z';i++)
        {
            while(m[i]>0)
            {
                ans.push_back(string(1,i));
                m[i]--;
            }
        }
        return ans;
    }
    
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans = count(words);
        return ans;
    }
};