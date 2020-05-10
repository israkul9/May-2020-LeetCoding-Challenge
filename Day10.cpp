
class Solution {
public:
	int findJudge(int N, vector<vector<int>>& trust) {

		if (trust.size() == 0) return 1;

		

		map < int, int >  mp;
		mp.clear();
		for (auto it : trust) {
			vector <int> temp = it;

			int p1 = temp[0];
			int val = temp[1];
			mp[p1] = val;

		}

		int judge = 0;

		for (int i = 1; i <= N; i++) {
			if (mp[i] == 0) {
				judge = i;
				break;
			}
		}



		int cnt = 0;

		for (auto it : trust) {
			vector <int> temp = it;

			int p1 = temp[0];
			int val = temp[1];

			if (p1 != judge and val == judge) {
				cnt++;
			}


		}

		if (cnt == N-1) {
			return judge;
		}
		else {
			return -1;
		}



	}
};