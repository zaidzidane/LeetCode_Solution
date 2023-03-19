class TrieNode{
    
    public:
        TrieNode* next[26]={NULL};
        bool flag=false;
};



class WordDictionary {
public:
     TrieNode* root=NULL;
    WordDictionary() {
        
        root=new TrieNode();
        
        
    }
    
    void addWord(string word) {
        
        TrieNode* temp=root;
        for(auto w : word){
            
                if(temp->next[w-'a']==NULL){
                    
                            temp->next[w-'a']=new TrieNode();
                    
                }
                temp=temp->next[w-'a'];
        }
       
        temp->flag=true;
        
    }
    
    bool dfs(TrieNode* root,string& word,int indx){
        
            if(root==NULL){
                    return false;
            }
        
             if(indx==(word.size())){
                
                    if(word[indx]=='.'){
                        
                        for(int i=0;i<26;i++){
                            if(root->next[i]!=NULL){
                                   return true;
                            }   
                         }            
                    }
                //cout<<root->flag<<"\t"<<word<<indx<<endl;
                return root->flag;
            }
    
            if(word[indx]=='.'){
                    bool val=false;
                    for(int i=0;i<26;i++){
                            if(root->next[i]!=NULL){
                                   val|=dfs(root->next[i],word,indx+1);
                            }   
                    }
                    return val;
            }
        
            return dfs(root->next[word[indx]-'a'],word,indx+1); 
        
    }
    
    
    
    bool search(string word) {
        
           TrieNode* temp=root;
           return dfs(temp,word,0);
        
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */