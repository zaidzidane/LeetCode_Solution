class Solution:
    
    
    def minOperations(self, logs: List[str]) -> int:
    
            item_list=[]
            for items in logs:
                
                if items=='./':
                        continue
                elif items=='../':
                    if len(item_list)>0:
                        item_list.pop(-1)
                else:
                        item_list.append(items)
            
            
            
            return len(item_list)
                
            