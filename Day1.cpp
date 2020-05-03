// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int ans = -1 ;
        
         long long int lo =1 ;
        
         long long int hi = n ;
        
        while( lo <= hi ){
             long long int mid = ( lo + hi ) /2 ;
            
            if(  isBadVersion(mid) ){
                ans = mid ;
                hi = mid -1 ;
            }else{
                lo = mid + 1 ;
            }
            
        }
        return ans ;
        
        
    }
};