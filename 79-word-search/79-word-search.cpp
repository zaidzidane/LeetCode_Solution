class Solution {
public:
    
    
   bool exist(vector<vector<char>>& board, string word) {
    for (unsigned int i = 0; i < board.size(); i++) 
        for (unsigned int j = 0; j < board[0].size(); j++) 
            if (dfs(board, i, j, word,0))
                return true;
    return false;
}

bool dfs(vector<vector<char>>& board, int i, int j, string word,int index) {
    if (index>=word.size())
        return true;
    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[index])  
        return false;
    char c = board[i][j];
    board[i][j] = '*';
   
    bool ret = dfs(board, i-1, j, word,index+1) || dfs(board, i+1, j, word,index+1) || dfs(board, i, j-1, word,index+1) || dfs(board, i, j+1, word,index+1);
    board[i][j] = c;
    return ret;
    
    
    }
};