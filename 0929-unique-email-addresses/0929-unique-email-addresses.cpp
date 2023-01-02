class Solution {
public:
    
    string check(string s)
    {
        string temp = "";
        
        for(int i=0;s[i]!='@';i++)
        {
           if(s[i] == '.')
                    continue;
                else if(s[i] == '+')
                    break;
                else
                    temp += s[i];
         
          }
        
       
              int ind = s.find('@');
                
                 temp += s.substr(ind, s.length()-ind);
            
            
        
        return temp;
    }
    
    
    int numUniqueEmails(vector<string>& emails) {
       set<string> m;
        
        
        for(int i=0;i<emails.size();i++)
        {
            string original = check(emails[i]);
          m.insert(original);
        }
        
        return m.size();
    }
};