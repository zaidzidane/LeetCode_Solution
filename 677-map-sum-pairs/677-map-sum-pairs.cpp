
struct TrieNode{
    
        unordered_map<char,TrieNode*>children;
        int value=0;
};


class MapSum {

TrieNode* root;
public:
    MapSum() {
        
        root=new TrieNode();
        
    }
    
    void insert(string key, int val) {
        
        TrieNode* temp=root;
        for(char item:key){
            
            if(temp->children.find(item)==temp->children.end()){
                        
                    temp->children[item]=new TrieNode();
                    
                
            }
                    temp=temp->children[item];
           
            
            
        }
        
        temp->value=val;
        
        
    }
    
    
    void dfs(TrieNode*root,int& count){
        
            if(root==NULL){
                    
                    return;
            }
        
            for(auto child:root->children){
                
                        count+=child.second->value;
                        dfs(child.second,count);
                
                
            }
        
        
    }
    
    
    int sum(string prefix) {
        
       TrieNode* temp=root;
       for(char item:prefix){
           
                if(temp->children.find(item)==temp->children.end()){
                    
                            return 0;
                }      
            
                temp=temp->children[item];
           
       }
        
        int count=temp->value;
        dfs(temp,count);
        
        return count;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */