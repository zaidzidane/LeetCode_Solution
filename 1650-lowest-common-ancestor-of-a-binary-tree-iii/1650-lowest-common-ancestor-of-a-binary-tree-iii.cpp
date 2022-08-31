/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    
    
    int dps(Node* a,int depth){
        
            if(a->parent==NULL)
                    
                    return depth;
        
            else
                    
                   return dps(a->parent,depth+1);
        
        
        
    }
    
    
    
    Node* lowestCommonAncestor(Node* p, Node * q) {
        
    
            int depth_p=dps(p,0);
            int depth_q=dps(q,0);
            
            // cout<<depth_p<<"\t"<<depth_q<<endl;
        
            
            if(depth_p>depth_q){
                
                    int dif=depth_p-depth_q;
                    while(dif>0){
                        if(p==q) return p;
                        p=p->parent;
                        dif-=1;
                        
                    }
                
                
            }
        
             if(depth_p<depth_q){
                
                    int dif=depth_q-depth_p;
                    while(dif>0){
                        if(p==q) return q;
                        q=q->parent;
                        dif-=1;
                        
                    }
                
            }
        
            
            while(p!=q){
                
                    p=p->parent;
                    q=q->parent;
                
            }
        
            
            return p;
        
    }
};