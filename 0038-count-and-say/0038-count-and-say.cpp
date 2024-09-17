class Solution {
public:
    
    string count(string temp)
    {
         int count =1;
        int i=1;
        string ans;
        for( i=1;i<temp.size();i++)
        {
            if(temp[i] == temp[i-1])
            {
                count++;
            }
            else {
                ans += to_string(count);
                ans += temp[i-1];
                count =1;
            }
        }
        ans += to_string(count);
         ans += temp[i-1];
        return ans;

    }
    
    string countAndSay(int n) {
        if(n == 1) return "1";
        string ans = "1";
        for(int i=1;i<n;i++)
        {
            ans = count(ans);
        }
        return ans;       
    }
};