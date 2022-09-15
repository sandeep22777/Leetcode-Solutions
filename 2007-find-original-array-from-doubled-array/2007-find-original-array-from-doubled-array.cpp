class Solution {
public:
    vector<int> findOriginalArray(vector<int>& change) {
        
            unordered_map<int,int> m;
            
            sort(change.begin(),change.end());
            int s = change.size();
            int ori = (s/2);
            for(int i=0;i<change.size();i++)
            {
                    m[change[i]]++;
            }
            
            vector<int>v;
            for(int i=0;i<change.size();i++)
            {
                if(m[change[i] *2] != 0  && m.find(change[i]*2) != m.end() && m[change[i]] != 0 )
                {
                        v.push_back(change[i]);
                        m[change[i]*2]--;
                        m[change[i]]--;
                }
            }
            
           for(auto i : m){
            if(i.second != 0){
                return vector<int>();
            }
        }
        
        return v;
            
    }
};