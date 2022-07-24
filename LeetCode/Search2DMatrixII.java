//https://leetcode.com/problems/search-a-2d-matrix-ii/
/*
	Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int rows = 0, columns = 0;
        for(int i = 0; i < matrix[0].length; i++) {
            if(matrix[0][i] > target)
                break;
            columns = i;
        }
        for(int i = 0; i < matrix.length; i++) {
            if(matrix[i][0] > target) 
                break;
            rows = i;
        }
        
        for(int i = 0; i <= rows; i++)
            for(int j = 0; j <= columns; j++)
                if(matrix[i][j] == target)
                    return true;
        
        return false;
    }
}