class Solution {
public:
    int findPairs(vector<int>& A, int k) {
        int count =0;
//	if(A.size() == 1 && k == A[0]) return 1;
	
	
	unordered_map<int,int> map;
	for(int i =0;i<A.size();i++)
	{
		map[A[i]]++;
	}
	
		
	
		for(auto ind : map)
		{
			if( k==0 )
			{
				if(ind.second >1) count++;
			}
			else
			{
				if(map.find(ind.first + k ) != map.end()) count++;
			}
		
		}
	
	return count;
	
    }
};