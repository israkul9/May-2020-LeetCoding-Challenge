class Solution {
public:
    string frequencySort(string str) {
         map < char, int > freq;

        
        if(str.size()==0) return "";
        if(str.size()==1) return str;
        
    for(auto it:str)freq[it]++;
    vector < pair < int, char > > vec;
    for(auto it = freq.begin() ; it!=freq.end() ; it++)
    {
        vec.push_back( { it->second, it->first } );
    }

    sort(vec.rbegin(), vec.rend());

    string ans = "";

    for(auto x:vec)
        for(int t =0 ; t < x.first ; t++)
        {
            ans.push_back(x.second);
        }
        
        return ans;

    }
};