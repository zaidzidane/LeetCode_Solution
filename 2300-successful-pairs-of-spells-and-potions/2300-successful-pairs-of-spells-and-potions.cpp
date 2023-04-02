class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
            sort(potions.begin(),potions.end());
            vector<int>ans;
            for(int i=0;i<spells.size();i++){
                    int start=0;
                    int end=potions.size()-1;
                    while(start<=end){
                            int mid=start+(end-start)/2;
                            long long val=1;
                            val*=potions[mid];
                            val*=spells[i];
                            if(val>=success){
                                            end=mid-1;
                            }
                            else{                   
                                            start=mid+1;
                            }
                    }
                
                    ans.push_back(potions.size()-1-end);
                
            }
        
            return ans;
        
    }
};