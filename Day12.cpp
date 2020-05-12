class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size()==0)return 0;
        
        int ans = -1;
        map < int , int > mp;
        for(auto x:nums) mp[x]++;
        
        for(auto x = mp.begin(); x!=mp.end();x++)
            if( x->second==1 ){
                ans =  x->first;
                break;
            }
        
        return ans;
        
    }
};