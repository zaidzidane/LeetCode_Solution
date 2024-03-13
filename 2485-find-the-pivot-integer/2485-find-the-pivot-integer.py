class Solution:
    
    def pivotInteger(self, n: int) -> int:
    
            start=1
            end=n
            sum1=(n)*(1+n)//2
            print(sum1)
            while(start<=end):
                    mid=(start+end)>>1
                    val1=(mid)*(1+mid)
                    print(mid,val1,(sum1+mid))
                    if (sum1+mid)==val1:
                        return mid
                    elif sum1>val1:
                        start=mid+1
                    else:
                        end=mid-1
                        

            return -1        
            