class Solution {
public:
	bool checkStraightLine(vector<vector<int>>& coordinates) {

        
        // formula of slope = (Y2 - Y1) / (X2 - X1)
        
        // if the slope of the coordinates are same then they are in  the straight line
        
        
		if (coordinates.size() == 2) return true;

		set <double> st;
		for (int i = 0; i  < coordinates.size()-1; i++) {
			vector <int> tmp1 = coordinates[i];
			vector <int> tmp2 = coordinates[i+1];

			double x1 = tmp1[0], y1 = tmp1[1];
			double x2 = tmp2[0], y2 = tmp2[1];
           
			double slope = (y2 - y1) / (x2 - x1);

		

			st.insert(slope);
		}

	if (st.size() == 1)
			return true;
		else
		{
			return false;
		}

		
	}
};