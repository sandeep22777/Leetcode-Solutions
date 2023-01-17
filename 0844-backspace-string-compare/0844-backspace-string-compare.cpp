class Solution {
public:
    
    bool check(stack<char> a,stack<char> b)
    {
        bool flag =true;
        
        if(a.size() != b.size()) return false;
        
       while(!a.empty())
       {
            if(a.top() == b.top())
            {
                a.pop();
                b.pop();
            }
            else
            {
                flag = false;
                break;
            }
        }
       
        
        return flag;
    }
    
    
    
    bool backspaceCompare(string s, string t) {
        stack<char> one;
        stack<char> two;
       
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != '#')
            {
                one.push(s[i]);
            }
            else
            {
                if(!one.empty()) one.pop();
            }
        }
        
        
          for(int i=0;i<t.size();i++)
        {
            if(t[i] != '#')
            {
                two.push(t[i]);
            }
            else
            {
                if(!two.empty()) two.pop();
            }
        }
        
        
        
        return check(one,two);
     
      
    }
};