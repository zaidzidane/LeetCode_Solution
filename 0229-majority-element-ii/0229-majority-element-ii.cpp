class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
            int cnt1=-1;
            int cnt2=-1;
            int val1=-1;
            int val2=-1;
            for(int i=0;i<nums.size();i++){
                
                    if(cnt1==-1 and val2!=nums[i]){
                            val1=nums[i];
                            cnt1=0;
                    }
                    else if(cnt2==-1 and val1!=nums[i]){
                            val2=nums[i];
                            cnt2=0;
                    }
                    else if(nums[i]==val1){
                            cnt1++;
                    }    
                    else if(nums[i]==val2){
                            cnt2++;
                    }
                    else{           
                            cnt1--;
                            cnt2--;
                    }
            }
        
            cnt1=0;
            cnt2=0;     
            cout<<val1<<"\t"<<val2<<endl;
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]==val1) cnt1++; 
                    else if(nums[i]==val2)cnt2++;   
            }
            
            vector<int>ans;
            if(cnt1>nums.size()/3){
                    ans.push_back(val1);
            }
            if(cnt2>nums.size()/3){
                    ans.push_back(val2);
            }
            
            return ans;
    }
};