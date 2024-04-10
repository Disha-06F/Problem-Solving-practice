class Solution {
public:
    vector<int> evenOddBit(int n) {
        int c=-1,even=0,odd=0;
        while(n)
        {int bits=(n&1);
        c++;
        n=n>>1;
        if(bits==1){
            if((c%2)==0)
            {
                even++;
            }
            else{
               odd++;
            }
        }


        }
        return {even,odd};
    }
         
};
