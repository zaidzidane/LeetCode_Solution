class Solution {
public:
    
    int countDays(vector<int>&nums,int mid){
        
        int days=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            
                sum+=nums[i];
                if(sum>mid){
                        days++;
                        sum=0;
                        i--;
                } 
                else if(sum==mid){
                        days++;
                        sum=0;
                }
        }
        if(sum>0)
                days++;
        return days;
    }
    
    
    
    int splitArray(vector<int>& nums, int m) {
        
        int right=0;
        for(int i=0;i<nums.size();i++){
                right+=nums[i];      
        }
        int left=*max_element(nums.begin(),nums.end());
        int mid;
        while(left<right){
                //cout<<left<<"\t"<<right<<endl;
                mid=left+(right-left)/2;
                int w=countDays(nums,mid);
                //cout<<"mid="<<mid<<"\t"<<"w=="<<w<<endl;
                if(w>m){
                        left=mid+1;  
                }
                else{
                        right=mid;
                }
                
            }

        return right;
       }   
    
};