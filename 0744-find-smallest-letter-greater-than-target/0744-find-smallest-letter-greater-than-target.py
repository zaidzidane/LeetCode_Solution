class Solution:
    
    
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        
            left=0
            right=len(letters)-1
            length=len(letters)-1
            while(left<right):

                mid=left+(right-left)//2
                if letters[mid]<=target:
                        left=mid+1
                        
                else:
                        right=mid
            
            
            print(left,right)
            if left==len(letters)-1 and letters[left]<=target:
                    return letters[0]
            
            
            return letters[right]
                        
                            
                    
        
                
        
        