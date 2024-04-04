class Solution {
public:
    bool dfs(auto& board, string& word, int i, int j, int s) {
        if(i<0 || i==board.size() || j<0 || j==board[0].size()) return false;
        if((board[i][j]!=word[s]) || (board[i][j]=='*')) return false;
        if(s==word.size()-1) return true;

        char b = board[i][j];
        board[i][j] = '*';
        bool is_exist = dfs(board, word, i+1, j, s+1) || dfs(board, word, i-1, j, s+1) || dfs(board, word, i, j+1, s+1) || dfs(board, word, i, j-1, s+1);
        board[i][j] = b;
        return is_exist;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++) 
        for(int j = 0; j < board[0].size(); j++) {
            if(dfs(board, word, i, j, 0)) return true;
        }
        return false;
    }
};