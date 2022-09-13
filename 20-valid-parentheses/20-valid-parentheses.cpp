class Solution {
public:
    bool isValid(string s) {
            
            
//              stack<char> open;
        
//         for (int i = 0; i < s.size(); i++) {
//             if (s[i] == ')' || s[i] == '}' || s[i] == ']') 
//             {
//                 if (open.empty()) {
//                     return false;
//                 }
//                 if (s[i] == ')' && open.top() != '(') {
//                     return false;
//                 }
//                 if (s[i] == '}' && open.top() != '{') {
//                     return false;
//                 }
//                 if (s[i] == ']' && open.top() != '[') {
//                     return false;
//                 }
//                 open.pop();
//             }
//                 else {
//                 open.push(s[i]);
//             }
//         }
        
//         if (!open.empty()) {
//             return false;
//         }
//         return true;
            
          
            
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