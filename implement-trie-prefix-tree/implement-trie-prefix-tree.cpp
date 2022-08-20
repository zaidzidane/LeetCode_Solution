struct TrieNode {
    unordered_map<char, TrieNode*> children;
    bool flag=false;
    
};


class Trie {
public:
    
    TrieNode* root;
    
    Trie() {
        root = new TrieNode();
        
    }
    
    
    void insert(string word) {
    
        TrieNode *temp=root;
        for(char c:word){
                
                if(temp->children.find(c)==temp->children.end()){
                    
                            temp->children[c]= new TrieNode();
                }
                           temp=temp->children[c];
                    
                       
        }
        
        temp->flag=true;
        
    }
    
    
    
    bool search(string word) {
        
        TrieNode* temp=root;
        for(char c:word){
            
                    if(temp->children.find(c)==temp->children.end()){
                                return false;            
                    }
                    else{
                                temp=temp->children[c];   
                    }
        }
        
        return temp->flag;
        
    }
    
    
    
    bool startsWith(string prefix) {
        
        TrieNode* temp=root;
        for(char c:prefix){
            
                if(temp->children.find(c)==temp->children.end()){
                                return false;                         
                    
                }
                else{
                        
                                temp=temp->children[c];
                }
            
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