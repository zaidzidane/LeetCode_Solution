class Solution:
    
    
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
    
            ans=0
            start=customers[0][0]
            for customer in customers:
                 
                    if start<customer[0]: 
                            ans+=customer[1]
                            start=customer[0]+customer[1]
                    else:
                        ans+=customer[1]+start-customer[0]
                        start+=customer[1]
                    
                    
            return ans/len(customers)