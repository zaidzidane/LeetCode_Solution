class Solution {
public:
    
    
    int find(int x,vector<int>&parent){
            while(x==parent[x]){
                    return x;
            }
            return parent[x]=find(parent[x],parent);
    }
    
    void unionset(int x,int y,vector<int>&parent){
        
            int find_x=find(x,parent);
            int find_y=find(y,parent);
            
            if(find_x<find_y){
                    parent[find_y]=parent[find_x];
            }    
            else if(find_x>find_y){
                    parent[find_x]=parent[find_y];
                
            }
    }
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
            vector<int>parent(26,-1);
            for(int i=0;i<26;i++){
                    parent[i]=i;
            }    
            for(int i=0;i<s1.size();i++){
                    unionset(s1[i]-'a',s2[i]-'a',parent);
            }
            string ans="";
        
        
            for(int i=0;i<baseStr.size();i++){
                    ans+=find(baseStr[i]-'a',parent)+'a';
            }
        
            
            return ans;
        
        
    }
};