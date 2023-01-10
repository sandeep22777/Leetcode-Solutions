class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      
        int s = nums1.size();
        int s2 = nums2.size();
        
        vector<int> v;
        
        for(int i=0;i<s;i++)
        {
            for(int j =0;j<s2;j++)
            {
                
                if(nums1[i] == nums2[j])
                {
                    
                    int temp = j;
                    int tempans = -1;
                    
                    while(temp < (s2-1)  )
                    {
                        if(nums2[j] < nums2[temp+1])
                        {
                            tempans =  nums2[temp+1];
                            break;
                           
                        }
                         temp++;                                                                   
                    }
                    v.push_back(tempans);
                    break;
                }
            }
            
        }
        return v;
    }
};