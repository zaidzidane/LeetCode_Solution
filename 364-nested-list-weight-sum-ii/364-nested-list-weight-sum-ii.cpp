/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */


class Solution {
public:
 
   int ans=0;
    int max_=INT_MIN;
    void dfs(vector<NestedInteger>&l,int depth){
            if(l.size()==0){
                 
                     return;
            }
            else{ 
                           max_=max(depth,max_);
                        for(auto i:l){
                            if(!i.isInteger()){
                                dfs(i.getList(),depth+1);
                            }    
                        }   
            }
         
    }
    
    void bfs(vector<NestedInteger>&l,int depth,int max_depth){
            if(l.size()==0){
                     return ;
            }
            else{ 
                        for(auto i:l){
                            if(i.isInteger()){
                                ans+=(max_depth-depth+1)*i.getInteger();
                                
                            }   
                            else{
                                
                                bfs(i.getList(),depth+1,max_depth);
                                
                            }
                        }   
            }
     
    }
    
    
    
    
    
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        

        int depth=1;
        dfs(nestedList,depth);
     
        int level=1;
        bfs(nestedList,level,max_);

        return ans;
        
    }
};