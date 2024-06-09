class Solution:
    
    
    def simplifyPath(self, path: str) -> str:
    
            if path=='' or path[0]!='/':
                    return ''
            paths=path.split('/')
            print(paths)
            
            stack=[]
            for item in paths:
                
                if item=='' or item=='.':
                        continue
                
                elif item=='..':
                        if len(stack)>0:
                            stack.pop(-1)
                else:
                        stack.append(item)
                        
                        
            return '/'+'/'.join(stack)