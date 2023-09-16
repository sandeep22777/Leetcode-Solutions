class Solution {
public:
    int maxArea(vector<int>& h) {
        int s =0;
        int e = h.size()-1;
        
        int ans = 0;
        
        while(s<=e)
        {
            int temp =0;
            if(h[s] <= h[e])
            {
                temp = h[s];
                ans = max(ans,temp*(e-s));
                          s++;
            }
            else {
                temp = h[e];
                ans = max(ans,temp*(e-s));
                          e--;
            }
        }
        return ans;
        
    }
};
