class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
                
                    sort(arr1.begin(),arr1.end());
                    sort(arr2.begin(),arr2.end());
                    int cnt=0;
                   
                    for(int i=0;i<arr1.size();i++){
                        
                        int start=0;
                        int end=arr2.size()-1;
                        int flag=0;
                        while(start<=end){
                        
                                int mid=start+(end-start)/2;
                                if(arr2[mid]==arr1[i]){
                                        
                                            flag=1;
                                            break;
                                    
                                }
                                else if(arr2[mid]>arr1[i]){
                                    
                                            end=mid-1;
                                        
                                }
                                else 
                                            start=mid+1;
                        
                    }
                        
                        cout<<start<<"\t"<<end<<endl;
                        if(flag==0){
                            
                                    if(start>=0 and start<=arr2.size()-1 and end>=0 and end<arr2.size()-1){
                                        
                                            if(abs(arr1[i]-arr2[start])>d and abs(arr1[i]-arr2[end]>d)){
                                                    
                                                    cnt+=1;
                                            }
                                        
                                    }
                                    
                                    else if(start>arr2.size()-1){
                                        
                                                if(abs(arr1[i]-arr2[end])>d){
                                                        cnt+=1;
                                                }
                                        
                                    }
                                               
                                    else if(end<0){
                                                
                                                if(abs(arr1[i]-arr2[start])>d){
                                                    cnt+=1;
                                                }
                                        
                                    }
                            
                            
                        }
                        
                
                    }
        
                return cnt;
    }
};