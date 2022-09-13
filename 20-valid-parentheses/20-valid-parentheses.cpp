class Solution {
public:
    bool isValid(string s) {  
            
            stack<char> valid;
 
            for(int i=0;i<s.size();i++)
            {
                    if(s[i] == '}' || s[i] == ']' || s[i] == ')')
                    {
                            
                            if(valid.empty()) return false;
                            if(s[i] == ')' && valid.top() != '(') 
                            {
                                    return false;
                            }
                            if(s[i] == '}' && valid.top() != '{') 
                            {
                                    return false;
                            }
                            if(s[i] == ']' && valid.top() != '[')
                            {
                                    return false;
                            }
                            valid.pop();
                           
                    }
                    else
                    {
                            valid.push(s[i]);
                    }
            }
            
             if (!valid.empty()) {
            return false;
        }
        return true;
        
    }
};