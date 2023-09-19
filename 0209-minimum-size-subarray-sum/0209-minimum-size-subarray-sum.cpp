class Solution {
public:
    
    int minSubArrayLen(int target, vector<int>& nums){
        
            int i=0;
            int j=0;
            int length=0;
            int sum=0;
            int slen=INT_MAX;
            while(j<nums.size()){
                    length=j-i-1; 
                    if(sum>=target){
                                cout<<i<<"\t"<<j-1<<"\t"<<length<<endl;
                                slen=min(slen,length+1);
                                sum-=nums[i];
                                i++;
                    }
                    if(sum<target){
                            sum+=nums[j];
                            j++;
                    }
            }
            
            while(i<j and sum>=target){
                
                    int length=j-i-1; 
                    cout<<i<<"\t"<<j-1<<endl;
                    slen=min(slen,length+1);
                    sum-=nums[i];
                    i++;
            }
            return slen==INT_MAX?0:slen;
        
    }
};