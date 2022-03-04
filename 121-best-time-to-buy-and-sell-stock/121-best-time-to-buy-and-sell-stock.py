class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        ans=[]
        ans.append(0)
        for i in range(1,len(prices)):
            ans.append(prices[i]-prices[i-1])

        max_=0
        total=0
        for i in range(len(ans)):

            max_+=ans[i]
            if(max_>total):
                    total=max_;
            if(max_<0):
                    max_=0
            
        return total
        