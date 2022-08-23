struct TrieNode{
    
        unordered_map<char,TrieNode*>children;
        bool flag=0;
    
};


class Solution {
public:
    TrieNode* root=new TrieNode();
    
    void insert(string key){
        
            TrieNode* temp=root;    
            for(char c:key){
                
                    if(temp->children.find(c)==temp->children.end()){
                        
                                temp->children[c]=new TrieNode();
                               
                    }
                
                     temp=temp->children[c];
                
            }
        
            temp->flag=1;
        
    }
    
    
    
    
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        
            for(auto item:dictionary){
                    insert(item);
            }
        
        
            stringstream ss(sentence);
            string word;
            string ans="";
         
            while(ss>>word){
                    TrieNode* temp=root;
                    int flag=0;
                    string so_far="";
                    for(char w:word){
                        
                            
                            if(temp->children[w]==NULL){
                                
                                    break;
                            }
                            temp=temp->children[w];
                            so_far+=w;
                            if(temp->flag==1){
                                
                                    flag=1;
                                    ans+=so_far;
                                    break;
                                
                            }
                                
                    }
                
                    if(flag==0){
                        
                            ans+=word;
                    }
                    ans+=" ";
                        
                            
            }
                        
                
                
            
            
            
            return ans.substr(0,ans.size()-1);
        
    }
};