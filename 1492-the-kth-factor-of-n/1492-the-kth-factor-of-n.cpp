class Solution {
public:
    int kthFactor(int n, int k) {
        int ans = -1;
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            if(n%i == 0) {
                ans++;
                v.push_back(i);
            }
        }
        if(k > v.size()) return -1;
        return v.size() == 0 ? -1 : v[k-1];
        
    }
};