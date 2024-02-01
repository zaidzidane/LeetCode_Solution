class Solution:
    
    
    def triangleNumber(self, nums: List[int]) -> int:
    
    
        nums.sort()
        val=len(nums)-1
        cnt=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                
                    start=j+1
                    end=val
                    total=nums[i]+nums[j]
                    while(start<=end):
                        mid=(start+end)//2
                        if(nums[mid]>=total):
                                end=mid-1
                        else:
                                start=mid+1
                    
                    # print(nums[i],nums[j],nums[end])
                    cnt+=end-j

        return cnt
            