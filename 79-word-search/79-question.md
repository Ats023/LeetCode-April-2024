# [79. Word Search](https://leetcode.com/problems/word-search/)

Given an  `m x n`  grid of characters  `board`  and a string  `word`, return  `true`  _if_  `word`  _exists in the grid_.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

## Example 1:
![image](https://github.com/Ats023/LeetCode-April-2024/assets/122550503/bc50df51-2a5d-4b89-bf68-23b43feae135)

     Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
     Output: true

## Example 2:
![image](https://github.com/Ats023/LeetCode-April-2024/assets/122550503/90379b1f-bb8b-4819-ab79-d99a50648a7d)
   

     Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
     Output: true

### Constraints:
-   `m == board.length`
-   `n = board[i].length`
-   `1 <= m, n <= 6`
-   `1 <= word.length <= 15`
-   `board`  and  `word`  consists of only lowercase and uppercase English letters.
