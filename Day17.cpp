class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {


        vector < int > ans;
        ans.clear() ;

        if(s.empty())
            return ans;


        if( p.length() > s.length() )
        {
            return ans;
        }

        map < char, int > mp,mp2;

    for(auto cur:p)
        mp[cur]++;



    for(int i = 0 ; i < p.length() ; i++)mp2[ s[i] ]++;

    int k = p.length() ;



    for(int i = 0 ; i <= s.length() - k  ; i++)
    {


        if( mp2 == mp )
        {
            ans.push_back(i);
        }


        if(  mp2[ s[i] ]>0 )
        {
            mp2[ s[i] ]--;


            if( mp2[ s[i] ] <= 0  ){
                mp2.erase(  s[i] );
            }

        }

        mp2[ s[ i+k ] ]++;


    }
        return ans;
    }
};