#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define bug cout <<"-----------------"<<endl





// problem name - Maximum Sum Circular Subarray
// tutorial link from where i have learnt this : https://www.youtube.com/watch?v=C4G8m3vvWFA




class Solution {

public:


	int  go(vector<int>& Array) {

		int n = Array.size();
		

		int Curr_Sum = Array[0];

		int Max_Sum = Array[0];

		int Right = 0;

		for (int i = 1; i <= n - 1; i++)
		{

			Curr_Sum = max(Array[i], Curr_Sum + Array[i]);

			if (Curr_Sum > Max_Sum)
			{
				Max_Sum = Curr_Sum;

				Right = i;
			}
		}


		int Sum = 0;

		int Left;

		for (int i = Right; i >= 0; i--)
		{

			Sum += Array[i];

			if (Sum == Max_Sum)
			{

				Left = i;

				break;
			}
		}


		return Max_Sum;

	}

	int   maxSubarraySumCircular(vector<int>& Arr) {
		
		int ans1 = this->go(Arr);

		int tot = 0;

		for (auto it : Arr)tot += it;


		for (int i = 0; i < Arr.size(); i++) 	Arr[i] = Arr[i] * (-1);

		int ans2 = this->go(Arr);
		ans2 *= -1;

		if (tot - ans2 != 0) ///special case

			return max(ans1, tot - ans2);
		else
			return ans1;
			

	}
};;




int main() {
	

	
	
	Solution ob;
	vector <int> a = { -2,-3,-1 };
	cout <<ob.maxSubarraySumCircular(a);







	
	return 0;
}