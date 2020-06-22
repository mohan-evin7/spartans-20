public class Solution {
    public int[][] generateMatrix(int A) {
        int n=A;
        int[][] spiral = new int[n][n];
        int value = 1,minCol = 0,maxCol = n-1,minRow = 0,maxRow = n-1;
         
        while (value <= n*n)
        {
            for (int i = minCol; i <= maxCol; i++)
            {
                spiral[minRow][i] = value;
                     
                value++;
            }
             
            for (int i = minRow+1; i <= maxRow; i++) 
            { 
                spiral[i][maxCol] = value; 
                 
                value++; 
            } 
             
            for (int i = maxCol-1; i >= minCol; i--)
            {
                spiral[maxRow][i] = value;
                             
                value++;
            }
             
            for (int i = maxRow-1; i >= minRow+1; i--) 
            {
                spiral[i][minCol] = value;
                 
                value++;
            }
             
            minCol++;
             
            minRow++;
             
            maxCol--;
             
            maxRow--;
        }
        return spiral;
        
    }
}
