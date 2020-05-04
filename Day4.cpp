class Solution
{
public:
    int  findComplement(int num)
    {
       // if(num==0)return 1;
        
        // as in the question say positive integer that means num > 0 always 
        
         int sum = 0 ;
        int j = 0 ;
        while ( sum < num )
        {
            sum += pow(2,j);
            j++;
        }

        return sum - num;

    }
};