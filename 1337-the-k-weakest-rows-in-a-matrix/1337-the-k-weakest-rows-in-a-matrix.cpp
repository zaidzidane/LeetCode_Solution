class Solution {
public:
    
    
    int binary(vector<int>row){
        
                reverse(row.begin(),row.end());
                int start=0;
                int end=row.size()-1;
                while(start<=end){

                    
                        int mid=start+(end-start)/2;
                    
                        if(mid==0 and row[mid]==1){
                            
                                    return -1;
                        }
                    
                        if(mid==row.size()-1 and row[mid]==0){
                            
                                    return row.size();
                        }
                    
                        if(row[mid]==1 and row[mid-1]==0){
                            
                                    return mid-1;
                        }
                        
                        else if(row[mid]>0){
                            
                                    end=mid;
                        }
                        else    
                                
                                    start=mid+1;
                        
                }
        
                
                return end;
    }
    
    
    
    struct CompareRow{
        
            bool operator()(vector<int>v1,vector<int>v2){
                
                    if(v1[1]==v2[1]){
                        
                            return v1[0]>v2[0];
                        
                    }
                
                    else{
                            return v1[1]>v2[1]; 
                        
                    }
                
            }
        
    };
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
                
                unordered_map<int,vector<int>>gzip;
                priority_queue<vector<int>,vector<vector<int>>,CompareRow>pq;    
        
                for(int i=0;i<mat.size();i++){
                    
                                cout<<mat.size()-1-binary(mat[i])<<endl;
                                int val=mat.size()-1-binary(mat[i]);
                                pq.push({i,val});
                    
                }
        
                vector<int>ans;
                while(k!=0){
                        // cout<<pq.top()[0]<<"\t"<<pq.top()[1]<<endl;
                        ans.push_back(pq.top()[0]);
                        pq.pop();
                        k--;
                    
                }
        
            
                
                
        
                return ans;
            
        
    }
};