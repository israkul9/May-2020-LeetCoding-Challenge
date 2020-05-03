class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        
        map < char , int > mp ;
        
        
        for(int i = 0 ; i < J.size() ; i++){
            mp[ J[i] ]++;
        }
        
        int ans = 0 ;
        
        for(int i = 0 ; i < S.size() ; i++){
            if(  mp[ S[i] ]>0 ) ans++;
        }
        
        return ans ;
    }
};