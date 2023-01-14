class Solution {
public:
    
    int find(int x,vector<int>&parent){
        
            if(x==parent[x]){
                
                    return x;      
                
            }
        
            return parent[x]=find(parent[x],parent);
        
    }
    
    
    void setunion(int x,int y,vector<int>&parent){
            
            
            int parent_x=find(x,parent);
            int parent_y=find(y,parent);
        
            if(parent_x!=parent_y){
                
                        if(parent_x<=parent_y){
                            
                                        parent[parent_y]=parent_x; 
                        }
                        else{
                            
                            
                                        parent[parent_x]=parent_y;
                        }
                
            }
            
        
        
        
        
    }
    
    
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        
                vector<int>parent(26,0);
                
                for(int i=0;i<26;i++){
                    
                            parent[i]=i;
                        
                }
        
        
                for(int i=0;i<s1.size();i++){
                    
                            setunion(s1[i]-'a',s2[i]-'a',parent);
                    
                }
        
//                  for(int i=0;i<26;i++){
                    
//                             char c='a'+i;
//                             cout<<c<<"\t"<<parent[i]<<endl;
                        
//                 }
                string ans="";
                for(int i=0;i<baseStr.size();i++){
                    
                        int v=find(baseStr[i]-'a',parent);
                        ans+='a'+v;
                    
                }
                
                return ans;
        
    }
};