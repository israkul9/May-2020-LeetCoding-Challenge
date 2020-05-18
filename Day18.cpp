
class Solution {
public:
    bool checkInclusion(string patt, string original) {


    if( patt.length() > original.length() ) return false;

    int patt_freq[26];
    int original_freq[26];

    memset( patt_freq, false, sizeof patt_freq );
    memset( original_freq, false, sizeof original_freq );


    for(int i = 0 ; i < patt.length() ; i++)
    {
        int x = patt[i] - 'a';
        patt_freq[x]++;
    }

    for(int i = 0 ; i < original.length() ; i++)
    {
        original_freq[ original[i]-'a' ]++;

        if( i  >= patt.length()  )
        {
            original_freq[ original[i - patt.length()]-'a' ]--;
        }
        int cnt = 0 ;
        for(int i = 0 ; i <26 ; i++)
        {
            if(original_freq[i]==patt_freq[i])
            {
                cnt++;
            }
        }

        if(cnt==26)
        {
           return true;
        }


    }
        return false;


    }
};

