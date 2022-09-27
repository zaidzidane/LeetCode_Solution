class Solution {
public:
    bool isPalindrome(int x) {
            
                if(x<0){
                    return false;
                }
                int cnt=0;
                int temp=x;
                vector<int>v;
                int i=0;
                while(temp){
                    
                    v.push_back(temp%10);
                    temp/=10;
                    
                }
          
                // cout<<-121%10<<endl;
                while(i<v.size()/2){
                        cout<<v[i]<<"\t"<<v[v.size()-1-i]<<endl;
                        if(v[i]==v[v.size()-1-i]){
                                i+=1;
                                continue;
                        }
                    
                        else{
                                return false;
                        }
                        
                        
                }
                
               return true;
    }
};