class Solution {
public:
    vector<string> count(vector<string>& words)
    {
        vector<string> ans;
        unordered_map<char,int> minf;
        
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            minf[ch] = 1000;
        }
        
        for(auto word : words)
        {
            unordered_map<char,int> fre;
            
            for(int i =0;i<word.size();i++)
            {
                fre[word[i]]++;
            }
            
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            minf[ch]  = min(minf[ch], fre[ch]);
        }
            
        }
        
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
           while(minf[ch] > 0)
           {
              ans.push_back(string(1, ch));
               minf[ch]--;
           }
        }
        return ans;
        
    }
    
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans = count(words);
        return ans;
    }
};