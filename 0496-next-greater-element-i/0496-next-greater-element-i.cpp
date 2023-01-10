class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      
        int s = nums1.size();
        int s2 = nums2.size();
        
        vector<int> v;
        
        for(int i=0;i<s;i++)
        {
            int highest = -1;
            
            for(int j =s2-1;j>=0;j--)
            {
                if(nums1[i] == nums2[j])
                {
                    if(j == s2-1) break;
                    
                    
                    if(nums2[j+1] > nums2[j])
                    {
                        highest  = nums2[j+1];
                        break;
                    }
                    else if(nums2[j] < highest)
                    {
                        break;
                    }
                    else
                    {
                        highest  =-1;
                        break;
                    }
                }
                if( nums1[i] < nums2[j] )
                {
                    highest  = nums2[j];
                  //  highest  = max(highest,nums2[j]);
                }
                                         
            }
            v.push_back(highest);
            
        }
        return v;
    }
};