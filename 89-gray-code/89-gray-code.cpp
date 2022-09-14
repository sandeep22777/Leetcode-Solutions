class Solution {
public:
    vector<int> grayCode(int grayNumber) {
         vector<int> v;
      v.push_back(0);
    if(grayNumber == 0) return v;
  
     v.push_back(1);
    
    
    int cur = 1;
    for(int i=2;i<=grayNumber;i++)
    {
        cur *= 2;
        for(int j= v.size()-1;j>=0;j--)
        {
            v.push_back(cur+v[j]);
        }
    }
    return v;
    }
};