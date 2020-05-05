class Solution {
public:
    int firstUniqChar(string str) {
        
        
        if(str.size()==0 ) return -1;
        if(str.size()==1) return 0;
    
	
	  int ans = -1;
	
	map < char, int > mp;

	for (int i = 0; i < str.length(); i++) {

		mp[str[i]]++;
	
	}

	for (int i = 0; i < str.length(); i++) {
		if (mp[str[i]] == 1) {
			ans = i;
			break;
		}
	}
	
        
        return ans;

	
        
    }
};