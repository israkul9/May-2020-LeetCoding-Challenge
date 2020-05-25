

// classic LCS

class Solution {
public:
	int maxUncrossedLines(vector<int>& str1, vector<int>& str2) {

		int len1 = str1.size();
		int len2 = str2.size();

		int mat[500 + 1][500 + 1];
		for (int i = 0; i <= len1; i++)
		{
			mat[i][0] = 0;
		}
		for (int i = 0; i <= len2; i++)
		{
			mat[0][i] = 0;
		}


		for (int i = 1; i <= len1; i++)
		{
			for (int j = 1; j <= len2; j++)
			{
				if (str1[i - 1] == str2[j - 1])
				{
					mat[i][j] = mat[i - 1][j - 1] + 1;

				}
				else
				{
					mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
				}
			}
		}



		//cout << "The length is:";
		return  mat[len1][len2];


	}
	
};