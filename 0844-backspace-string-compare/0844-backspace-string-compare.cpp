class Solution {
public:
    
    bool backspaceCompare(string s, string t) {
        stack<int> s1;
        stack<int> s2;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!= '#')
            {
                s1.push(s[i]);
            }
            else {
                if(s1.size() !=0)
                {
                     s1.pop();
                }
               
            }
        }
        
          for(int i=0;i<t.size();i++)
        {
            if(t[i]!= '#')
            {
                s2.push(t[i]);
            }
            else {
                if(s2.size() !=0)
                {
                     s2.pop();
                }
            }
        }
        if(s1.empty() && !s2.empty()) return false;
        if(s2.empty() && !s1.empty()) return false;
        if(s1.size() != s2.size()) return false;
        
        while(s1.size())
        {
            if(s1.top() != s2.top() )
            {
                return false;
            }
            else {
                s1.pop();
                s2.pop();
            }
        }
        return true;
    }
};