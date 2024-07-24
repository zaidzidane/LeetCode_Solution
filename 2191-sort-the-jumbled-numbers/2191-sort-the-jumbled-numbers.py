class Solution:
    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        ans = []
        for indx,num in enumerate(nums):
            val = 0
            cnt = 1
            item = num
            if num == 0:
                val = mapping[num] * 10 ** cnt + val
            else:
                while num > 0:
                    last_digit = num % 10
                    num //= 10
                    val = mapping[last_digit] * 10 ** cnt + val
                    cnt += 1
            ans.append([val // 10, indx])
        
        ans.sort(key=lambda x: (x[0], x[1]))
        return [nums[item[1]] for item in ans]
