class Solution:
    
    def restoreMatrix(self, rowSum: List[int], colSum: List[int]) -> List[List[int]]:
    
            n=len(rowSum)
            m=len(colSum)
            
            curr_row_sum=[0] * n
            curr_col_sum=[0] * m
            
            
            orig_matrix=[[0]*m for _ in range(n)]
            for i in range(n):
                for j in range(m):
                    
                    orig_matrix[i][j] = min(rowSum[i]-curr_row_sum[i],colSum[j]-curr_col_sum[j])
                    
                    curr_row_sum[i]+=orig_matrix[i][j]
                    curr_col_sum[j]+=orig_matrix[i][j]
                    
            
            
            
            return orig_matrix
                    
        