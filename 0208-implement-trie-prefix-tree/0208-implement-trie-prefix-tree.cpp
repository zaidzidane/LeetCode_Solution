struct TrieNode{
    
        unordered_map<char,TrieNode*>children;
        bool flag=false;
};


class Trie {
public:
    
    TrieNode* root;
    Trie() {
        
        root=new TrieNode();
        
    }
    
    void insert(string word) {
        
        TrieNode* temp=root;
        for(auto item:word){
            
                if(temp->children.find(item)==temp->children.end()){
                    
                            temp->children[item]=new TrieNode();
                    
                }
                
                    
                 temp=temp->children[item];   
                
            
        }
        
        temp->flag=true;
        
        
    }
    
    bool search(string word) {
        
            TrieNode* temp=root;
            for(auto item:word){
                
                    if(temp->children.find(item)==temp->children.end()){
                                
                                return false;
                            
                    }
                
                    temp=temp->children[item];
                
            }
        
            return temp->flag;
        
    }
    
    bool startsWith(string prefix) {
        
        
        TrieNode* temp=root;
        for(auto item:prefix){
            
                if(temp->children.find(item)==temp->children.end()){
                                
                                return false;
                            
                  }
                else
                    temp=temp->children[item];
        }
        
       return true; 
        
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */