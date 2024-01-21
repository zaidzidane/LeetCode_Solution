# """
# This is ArrayReader's API interface.
# You should not implement it, or speculate about its implementation
# """
#class ArrayReader:
#    def get(self, index: int) -> int:

class Solution:
    
    
    def search(self, reader: 'ArrayReader', target: int) -> int:
        
            start=0
            end=10000
            while(start<=end):
                mid=start+(end-start)//2
                val=reader.get(mid)
                if val==target:
                    return mid
                elif val==(2**31-1) or val>target:
                        end=mid-1
                else:
                        start=mid+1
                        
            
            return  -1      
                    
                
        
        
        
        
        
    
        