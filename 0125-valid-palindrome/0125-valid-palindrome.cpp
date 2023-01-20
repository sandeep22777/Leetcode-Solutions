class Solution {
public:
    bool isPalindrome(string s) {
        
        
        int st =0;
        int e = s.size()-1;
        
        while(st<e)
        {
            if(ispunct(s[st]) || s[st] ==' ')
            {
                st++;
                continue;
            }
            else if(ispunct(s[e]) || s[e] == ' ')
            {
                e--;
                continue;
            }
            else if(tolower(s[st]) != tolower(s[e]))
            {
                return false;
            }
            else {
                st++;
                e--;
            }
        }
        
        
        return true;
    }
};