class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        
            dici=Counter(range(len(nums)+1))
            print(dici)
            dic2=Counter(nums)
            
            for key,value in dici.items():
                if key not in dic2:
                        return key
                
            return -1