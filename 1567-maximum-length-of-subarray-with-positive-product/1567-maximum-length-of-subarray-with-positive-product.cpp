class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        
       int n=nums.size(),mx=0, last_index=0,last_neg_index=-1,neg=0;
        for(int i=0;i<n;++i){
            if(nums[i]==0) last_index=i+1,last_neg_index=-1,neg=0;
            else if(nums[i]<0){
                if(last_neg_index==-1) last_neg_index=i;
                neg++;
            }
            else if(nums[i]>0 && neg%2) mx=max(mx,i-last_neg_index);
            if(neg%2==0) mx=max(mx,i-last_index+1);
        }
        return mx;
            
            
    }
};