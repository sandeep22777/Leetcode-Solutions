class Solution {
public:
    string m[31] = {""};
    string countAndSay(int n) {
        m[1] = "1";
        string next, prev;
        int j;
        for(int i=2;i<n+1;i++)
        {
            int count=1;
            next = "";
            prev = m[i-1];
            int len = prev.size();
            
            for(j=1;j<len;j++)
            {
                if(prev[j-1] == prev[j])
                {
                    count++;
                }
                else {
                    next += to_string(count) + prev[j-1];
                    count=1;
                }
            }
            next += to_string(count) + prev[j-1];
                    m[i] = next;           
        }
        return m[n];
    }
};