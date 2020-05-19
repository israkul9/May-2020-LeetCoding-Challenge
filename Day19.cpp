

class StockSpanner
{

    vector < int > arr;

public:
    StockSpanner()
    {
        arr.clear() ;
    }

    int next(int price)
    {


        int val = price ;
        arr.push_back(val);
        int ans = 0 ;


        for(int i = arr.size()-1 ; i >=0 ; i--)
        {
            if( arr[i] <= val )
            {
                ans++;
            }
            else
            {
                break;
            }
        }

       // cout << ans <<" ";
         return ans;


    }
};
