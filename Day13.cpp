#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define bug cout <<"-----------------"<<endl





/// ?????? ???? ??????? ???? ??? ??????? ??????  , ?????? ?? ??????? ???? k ?? ????? ????? ??? ?????????? ???? ????? ??? ??????? ??? ? 


/// https://www.youtube.com/watch?v=FKfNLtdLEeQ&feature=youtu.be




class Solution
{
public:
    string removeKdigits(string str, int k)
    {

        if(k==str.length())return "0";
        if(str.length()==0)
            return "0";


        stack < char > st ;

        for(int i = 0 ; i < str.length() ; i++)
        {


            while( !st.empty() and k > 0 and st.top() > str[i] )
            {
                st.pop();
                k--;
            }
            st.push(str[i]);

        }

        while(!st.empty()and k--)
        {
            // cout << st.top() <<" ";
            st.pop();
        }

        string ans = "";

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        //  cout << ans <<endl;


        while(ans.length()>1 and ans[0]=='0')
            ans.erase(0,1);
            
            return ans;
    }
};


int main()
{


   


    return 0;
}
