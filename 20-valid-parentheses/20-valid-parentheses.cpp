class Solution {
public:
    bool isValid(string s) {
            stack<char> valid;
            if(s.size() <2) return false;
            unordered_map<char,char> m;
          m[')'] = '(';
            m['}'] = '{';
            m[']'] = '[';
            
            for(int i=0;i<s.size();i++)
            {
                    
                    if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                    {
                            valid.push(s[i]);
                    }
                    else
                    {
                            if(valid.empty()) return false;
                            if(valid.top() == m[s[i]])
                            {
                                    valid.pop();
                            }
                            else 
                            {
                                    return false;
                            }
                    }
                    
                    
            }
            
           
            if(valid.empty()) return true;
            else return false;
                 
        
    }
};