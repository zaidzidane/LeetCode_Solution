class Solution:
    
    def __helper(self,rating,indx):
        
        left_l,left_h=0,0
        i=0
        while(i<indx):
                if rating[i]<rating[indx]:
                        left_l+=1
                if rating[i]>rating[indx]:
                        left_h+=1
                i+=1
        
        i=indx+1
        right_l,right_h=0,0
        while(i<len(rating)):
                if rating[i]>rating[indx]:
                        right_h+=1
                if rating[i]<rating[indx]:
                        right_l+=1
                i+=1
        
        return left_l,left_h,right_l,right_h                
        
    
    def numTeams(self, rating: List[int]) -> int:
        
        cnt=0
        for i in range(1,len(rating)-1):
            val=rating[i]
            left_l,left_h,right_l,right_h=self.__helper(rating,i)
            cnt+=left_l*right_h+left_h*right_l
            
        
        
        return cnt