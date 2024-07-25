class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        
        cnt_dict=collections.Counter(nums)
        
        
            
        return [i for i in range(min(cnt_dict.keys()),max(cnt_dict.keys())+1) for cnt in range(cnt_dict[i])]
            
            
        
        