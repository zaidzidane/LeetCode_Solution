class TimeMap:
    
    
    def __init__(self):
        
            self.arr={}
                

    def set(self, key: str, value: str, timestamp: int) -> None:
            
                if key not in self.arr:
                        self.arr[key]=[]
                        self.arr[key].append([timestamp,value])
                        return None
                start=0
                end=len(self.arr[key])-1
                while(start<=end):
                        mid=start+(end-start)//2
                        if self.arr[key][mid][0]==timestamp:
                                self.arr[key][mid][1]=value
                                return
                        elif self.arr[key][mid][0]>timestamp:
                                end=mid-1
                        else:
                                start=mid+1
                                
                
                
                self.arr[key].insert(start,[timestamp,value])
    
        

    def get(self, key: str, timestamp: int) -> str:
        
            if key not in self.arr:
                    return ''
                
            Narr=self.arr[key]
            start=0
            end=len(Narr)-1
            while(start<=end):
                mid=start+(end-start)//2
                # print(mid)
                if(Narr[mid][0]==timestamp):
                        return Narr[mid][1]
                    
                elif(Narr[mid][0]>timestamp):
                        end=mid-1
                else:
                        start=mid+1
                    
            if end==-1:
                return ''
            return Narr[end][1]
                    
            
                
                
            
            
            
            
                
                
            
        
        
        

# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)