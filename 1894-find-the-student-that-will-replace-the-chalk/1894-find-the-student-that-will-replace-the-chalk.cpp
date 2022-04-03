class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        
        long long int total=0;
        total=accumulate(chalk.begin(),chalk.end(),total);
        //cout<<total<<endl;
        int val=k%total;
        //cout<<val;
        if(val==0){
                return 0;
        }
        for(int i=0;i<chalk.size();i++){
                val-=chalk[i]; 
                if(val<0){
                        return i;
                }
                
        }
        
        return -1;
        
    }
};