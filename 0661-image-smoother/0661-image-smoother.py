class Solution:
    def imageSmoother(self, img: List[List[int]]) -> List[List[int]]:
        
        directions=[[1,0],[-1,0],[1,1],[-1,-1],[0,1],[0,-1],[1,-1],[-1,1],[0,0]]
        ans=[[0]*len(img[0]) for i in range(len(img))]
        for i in range(len(img)):
            for j in range(len(img[0])):
                val=0
                cnt=0
                for dirx,diry in directions:
                        m=i+dirx
                        n=j+diry
                        
                        if m<0 or m>=len(img) or n<0 or n>=len(img[0]):
                                continue
                        else:
                                
                                val+=img[m][n]
                                cnt+=1
        
                print(val,cnt)
                ans[i][j]=val//cnt
            
                                
        return ans        
                                
                                
                        
        
        
        
        