
class Solution {
public:


    int titleToNumber(string columnTitle) {
        
  
            long long int  ans=0;
            long long int val=1;
            while(columnTitle!=""){
                  
                    ans+=(columnTitle.back()-'A'+1)*val;
                    val*=26;
                    columnTitle=columnTitle.substr(0,columnTitle.length()-1);
            }
        
            return ans;
    }
};