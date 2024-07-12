class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        cnt = 0
        stack = []

        # Determine which pair to prioritize based on the values of x and y
        first_pair = ('a', 'b') if x > y else ('b', 'a')
        first_value, second_value = (x, y) if x > y else (y, x)

        # Process the string to remove the prioritized pair
        for item in s:
            if len(stack)!=0 and stack[-1] == first_pair[0] and item == first_pair[1]:
                cnt += first_value
                stack.pop()
            else:
                stack.append(item)

        # Process the remaining stack to remove the other pair
        temp_stack = []
        for item in stack:
            if len(temp_stack)!=0 and temp_stack[-1] ==  first_pair[1] and item == first_pair[0]:
                cnt += second_value
                temp_stack.pop()
            else:
                temp_stack.append(item)

        return cnt
