class MovingAverage:

    

    def __init__(self, size: int):
            self.size=size 
            self.total=0
            self.queue=[]
        
    def next(self, val: int) -> float:
        
        
        if(len(self.queue)>=self.size):
                self.total-=self.queue[0]
                self.queue.pop(0)
        
        
        
        self.total+=val
        print(self.total)
        self.queue.append(val)
        return self.total/len(self.queue)
            
            
            
                    
        
        


# Your MovingAverage object will be instantiated and called as such:
# obj = MovingAverage(size)
# param_1 = obj.next(val)