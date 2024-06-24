class Solution:
    
    
    def maximumTotalCost(self, nums: List[int]) -> int:
            
            
            addResults=nums[0]
            subResults=nums[0]
            ans=[[nums[0],nums[0]]]
            for item in nums[1:]:
                
                temp_add=max(ans[-1][0],ans[-1][1])+item
                temp_sub=ans[-1][0]-item
                
                ans.append([temp_add,temp_sub])
                
                
            
            print (ans)
            return max(ans[-1][0],ans[-1][1])