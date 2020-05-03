class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
          map < char, int> maga;
  
    maga.clear();
        
        bool ans = true;
        
   // for(int i = 0 ; i < ransomNote.length() ; i++)   rans[ ransomNote[i] ]++;
    for(int i = 0 ; i < magazine.length() ; i++) maga[ magazine[i] ]++;

   
        

     for(int i = 0 ; i <ransomNote.size() ; i++ )
    {
        char x = ransomNote[i];
        if( maga[x] > 0 )
        {
            maga[x]--;
        }
        else
        {
            ans = false;
            break;
        }
    }

        
        
        return ans;
       
    }
};