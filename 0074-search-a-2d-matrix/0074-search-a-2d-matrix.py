class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        rows=len(matrix)
        columns=len(matrix[0])
        start=0
        end=rows*columns-1
        
        while(start<=end):
            
            mid=(start+end)//2
            row=mid//columns
            column=mid%columns
            print(row,column)
            if matrix[row][column]==target:
                    return True
                
            elif matrix[row][column]<target:
                    start=mid+1
            else:
                    end=mid-1
            
            
        return False