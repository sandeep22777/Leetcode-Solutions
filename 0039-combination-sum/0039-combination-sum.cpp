class Solution {
public:
    
     void cs(vector<int>&c,int t,int i,vector<vector<int>> &v,vector<int> &a)
     {
             
             if(i==c.size() || t<0 || t==0)
             {
                     if(t ==0)
                     {
                                v.push_back(a);
                             return ;
                     }
                     
                    return ;
             }

        a.push_back(c[i]);
             t = t-c[i];
          cs(c,t,i,v,a);
             a.pop_back();
             t = t+c[i];
             cs(c,t,i+1,v,a);

     
     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> v;
            vector<int>a;

            cs(candidates,target,0,v,a);
            
           return v; 
    }
};