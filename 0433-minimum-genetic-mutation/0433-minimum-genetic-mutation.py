class Solution:
    
    
    def minMutation(self, startGene: str, endGene: str, bank: List[str]) -> int:
    
    
            queue=[(startGene,0)]
            seen={startGene}
            
            while(len(queue)):
               
                temp,dist=queue.pop(0)
                for char in "ACGT":
                    for i in range(len(temp)):
                        s = temp[:i]+char+temp[i+1:]
                        if s  in bank and s not in seen:
                            if s==endGene:
                                    return dist+1
                            queue.append((s,dist+1))
                            seen.add(s)
            
                
            
                      
            return -1