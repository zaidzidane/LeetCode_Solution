class Solution {
public:
    void sortColors(vector<int>& nums) {
            
                    int i=0;
                    int j=nums.size()-1;
                
                    while(i<=j){
                            cout<<i<<j;
                            if(nums[j]==2){
                                  
                                    while( j>=i and nums[j]==2){
                                             
                                                j--;
                                    }
                                    
                                
                            }
                        
                            else{
                                if(nums[i]==2){

                                        swap(nums[i],nums[j]);

                                        j--;
                                        i++;

                                }
                                else{

                                            i++;

                                }
                            }
                            
                        
                    }
        
                    
                    cout<<i;
                    cout<<j<<endl;
        
                    i=0;
                    int k=j;
                
                    while(i<k){
                            cout<<i<<"\t"<<k<<endl;
                        
                            if(nums[k]==1){
                                    
                                    while(  k>=i and nums[k]==1){
                                             
                                                k--;
                                    }
                                    
                                
                            }
                        
                            else{
                                if(nums[i]==1){

                                        swap(nums[i],nums[k]);

                                        k--;
                                        i++;

                                }
                                else{

                                            i++;

                                }
                            }
                        
                        
                        
                        
                    }
        
        
        
        
        
        
    }
};