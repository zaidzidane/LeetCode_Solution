class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        
        ans=list(zip(heights,names))
        ans.sort(reverse=True,key=lambda x:x[0])
        return [item[1] for item in ans]