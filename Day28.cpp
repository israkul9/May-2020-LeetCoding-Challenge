class Solution {
public:
    vector<int> countBits(int num) {
        vector <int> ans; ans.clear();
        for(int i = 0 ; i <=num;i++){
            int val =  __builtin_popcount(i);
            ans.push_back(val);
        }
        return ans;
    }
};