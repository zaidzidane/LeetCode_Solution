class Solution:
    
    
    
    def maxSatisfied(self, customers: List[int], grumpy: List[int], minutes: int) -> int:
    
            i=0
            each_cost = [-1*customers[i]*(grumpy[i]-1) for i in range(len(grumpy))] 
            cost=sum(each_cost)
            max_cost=sum(each_cost)
            while(i<len(each_cost)):
                
                if i<minutes:
                        if grumpy[i]==1:
                            cost+=grumpy[i]*customers[i]
                        
                else:
                        if grumpy[i-minutes]==1:
                            
                            cost-=grumpy[i-minutes]*customers[i-minutes]
                        if grumpy[i]==1:
                            cost+=grumpy[i]*customers[i]
                
               
                i+=1
                max_cost=max(max_cost,cost)
            
            return max_cost            
                        
                
        
            
        
        