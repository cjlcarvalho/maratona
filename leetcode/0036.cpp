class Solution
{

public:

    void clear_map(map<char, bool> &occ_map)
    {
        for (char c = '0'; c <= '9'; c++) {
            occ_map[c] = false;
        }
    }

    bool isValid(vector<vector<char>> &board)
    {
        map<char, bool> occ_map;
        clear_map(occ_map);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && occ_map[board[i][j]]) {
                    return false;
                }
                occ_map[board[i][j]] = true;
            }
            clear_map(occ_map);
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.' && occ_map[board[j][i]]) {
                    return false;
                }
                occ_map[board[j][i]] = true;
            }
            clear_map(occ_map);
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                for (int k = i; k <= i + 2; k++) {
                    for (int l = j; l <= j + 2; l++) {
                        if (board[k][l] != '.' && occ_map[board[k][l]]) {
                            return false;
                        }
                        occ_map[board[k][l]] = true;
                    }
                }
                clear_map(occ_map);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>> &board)
    {
        return isValid(board);
    }

};
