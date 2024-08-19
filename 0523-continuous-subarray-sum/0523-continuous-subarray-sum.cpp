class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     unordered_map<int, int> m;
    int cur = 0;
    m[0] = -1;  // Initialize with remainder 0 at index -1 to handle cases where subarray starts at index 0
    
    for (int i = 0; i < nums.size(); i++) {
        cur += nums[i];
        int remainder = cur % k;
        
        // Adjust for negative remainder, as C++ '%' operator can return negative values
        if (remainder < 0) remainder += k;

        if (m.find(remainder) != m.end()) {
            if (i - m[remainder] >= 2) {
                return true;
            }
        } else {
            // Only store the first occurrence of a remainder
            m[remainder] = i;
        }
    }
    return false;
    }
};

// [23,25,29,35,42]