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
    
    int maxdepth=1;
    int sum=0;
    void maxim(vector<NestedInteger>items,int depth){
        
            if(items.empty()){
                
                 maxdepth=max(maxdepth,depth-1);
                return;
            }
        
            for(auto item:items){
                    
                     if(item.isInteger()){
                        
                            maxdepth=max(maxdepth,depth);
                            
                     }
                    else
                        maxim(item.getList(),depth+1);
                }
         
    }
    
    
    void dfs(vector<NestedInteger> items,int depth){
        
                 for(auto item:items){
                                  
                        if(item.isInteger())
                        
                                sum+=(maxdepth-depth+1)*item.getInteger();
                        else          
                                
                                dfs(item.getList(),depth+1);
                     
                 }
        
    }
    
    
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        
       
        maxim(nestedList,1);
        dfs(nestedList,1);
        cout<<maxdepth;
        return sum;
        
    }
};