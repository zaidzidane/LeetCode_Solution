/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        
        vector<int>lr=binaryMatrix.dimensions();
        int left=lr[0];
        int right=lr[1];
        
        int minim=right;
        for(int i=0;i<left;i++){
                int start=0;
                int end=right-1;
                int flag=0;
                
                while(start<=end){
                        int mid=start+(end-start)/2;
                        cout<<i<<"\t"<<mid<<endl;
                        if(binaryMatrix.get(i,mid)==1){
                                    end=mid-1;
                                    flag=1;
                        }
                        else{
                                    start=mid+1;    
                        }  
                }
            
              
                if(flag)
                     minim=min(start,minim);
            
        }
        
        return minim==right?-1:minim;
        
    }
};