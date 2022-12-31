class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      vector<int> v;
        if(arr.size() == 1)
        {
            v.push_back(-1);
            return v;
        }
       
        int highest = -1;
        int temp;
        for(int i = arr.size()-1;i>=0;i--)
        {
              temp = arr[i];
           arr[i] = highest;
            if(temp > highest) highest = temp;
             
            
        }
        
        
        return arr;
        
    }
};