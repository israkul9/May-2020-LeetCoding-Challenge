class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ans = 0 ;
        
        
        if(nums.size()==0) return -1;
        
        map < int , int > mp;
        mp.clear();
        for(auto it : nums) mp[it]++;
        
        int x = nums.size() /2 ;
        
        for(auto it = mp.begin() ; it!= mp.end() ; it++){
            if( it->second > x ){
                ans = it->first;
                break;
            }
        }
        
        return ans ;
        
        
    }
};