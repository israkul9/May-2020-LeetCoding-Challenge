class Solution {
public:
    int minDistance(string str1, string str2) {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        
        int box[600][600];
	memset(box, false, sizeof box);
	//cin >> str1 >> str2;
	for (int i = 0; i <= str1.length(); i++) {
		box[i][0] = i;
	}

	for (int i = 0; i <= str2.length(); i++) {
		box[0][i] = i;
	}

	for (int i = 1; i <= str1.length(); i++) {
		for (int j = 1; j <= str2.length(); j++) {
			if (str1[i - 1] == str2[j - 1])
			{
				box[i][j] = box[i - 1][j - 1];
			}
			else
			{
				box[i][j] = min({ box[i - 1][j]+1 , box[i][j - 1]+1 , box[i-1][j - 1]+1 });
			}
		}
	}

	int ans;
	ans =  box[str1.length()][str2.length()];

        return ans;
        
    }
};