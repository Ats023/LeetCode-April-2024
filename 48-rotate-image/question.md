# 48. Rotate Image

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

## Example 1:
![image](https://github.com/Ats023/LeetCode-April-2024/assets/122550503/2662e3f9-2886-4329-9f77-4b973ac3ae4b)

    Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
    Output: [[7,4,1],[8,5,2],[9,6,3]]

## Example 2:
![image](https://github.com/Ats023/LeetCode-April-2024/assets/122550503/af25a587-53a9-48c3-862b-4300c631f701)

    Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
    Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

### Constraints:
1. n == matrix.length == matrix[i].length
2. 1 <= n <= 20
3. -1000 <= matrix[i][j] <= 1000
