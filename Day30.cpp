class Solution {
    
    
    
double fun(int x, int y)
{

    double xx = (double)x;
    double yy = (double)y;

    double ans = abs((xx-0)*(xx-0) + (yy-0)*(yy-0));
    ans = sqrt(ans);

    return ans;

}
    
    
    
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector < vector <int> > res ;
        res.clear();
        if(points.size()==0 or k==0) return res;
        
      

    vector < pair <double, pair < int, int > > > cur;


    for(auto it:points)
    {

        vector <int> temp = it;
        int x = temp[0];
        int y = temp[1];

        cur.push_back( {  fun(x,y), {x,y}   }  );

        // cout << fun(x,y) <<endl;

    }

    sort(cur.begin(), cur.end());
    for(int  it = 0 ; it < k  ;it++)
    {
         vector <int> temp = { cur[it].second.first ,   cur[it].second.second };
         res.push_back(temp);
       // cout << cur[it].first <<"  : "<<cur[it].second.first <<" : "<<cur[it].second.second<<endl;

    }
        
        return res;
        
    }
};