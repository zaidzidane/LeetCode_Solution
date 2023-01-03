#define N 26;
class TrieNode{
    public:
     TrieNode* children[26];
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
            for(auto c:word){
                if(temp->children[c-'a']==NULL){
                        temp->children[c-'a']=new TrieNode();
                }
                    temp=temp->children[c-'a'];     
            }
          temp->flag=true;    
    }
    
    
    TrieNode* getroot(){
            return root;
    }
    
};
    
        
    
    vector<vector<int>>directions{{1,0},{-1,0},{0,-1},{0,1}};
    void dfs(vector<vector<char>>& board,int i,int j,string word,TrieNode* t,vector<string>&ans) 
    {
        
           if(t->flag==true){
             
                ans.push_back(word);
                t->flag=false;
             
         }
        
        
          if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or board[i][j]=='*'){
                    
                        return;
                
          }
        
     
        
          if(t->children[board[i][j]-'a']==NULL){
              
                return;
          }   
        
        
      
         word+=board[i][j];
         char c=board[i][j];
         //cout<<c<<endl;
         board[i][j]='*';
          for(int k=0;k<directions.size();k++){
              
                    int x=i+directions[k][0];
                    int y=j+directions[k][1];
                    dfs(board,x,y,word,t->children[c-'a'],ans);  
          }
          board[i][j]=c;
        
        
    }



class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
            Trie t;
            for(int i=0;i<words.size();i++){
                    t.insert(words[i]);
             
            }
    
            vector<string>ans;
            TrieNode* root= t.getroot();
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                        
                        
                        dfs(board,i,j,"",root,ans);
                    
                } 
            }
        
            return ans;
        
    }
};