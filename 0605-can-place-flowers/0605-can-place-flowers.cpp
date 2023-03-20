class Solution {
public:
    
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            
            if(n>flowerbed.size()){
                    return false;  
            }
        
            if(flowerbed.size()==1 and n==1){
                    cout<<"here";
                    if(flowerbed[0]==0) return true;
                    else return false;
            }
        
        
            for(int i=0;i<flowerbed.size();i++){
                
                        cout<<n<<endl;
                        if(n==0) return true;
                
                        if(flowerbed[i]==0) {
                                if(i==0 and flowerbed[i+1]==0){
                                            cout<<"here";
                                            flowerbed[i]=1;
                                            n-=1;
                                }       
                                else if(i==flowerbed.size()-1 and flowerbed[i-1]==0){
                                            cout<<"here";
                                            flowerbed[i]=1;
                                            n-=1;

                                }

                                else{
                                            if(i>0 and i<flowerbed.size()-1 and flowerbed[i-1]==0 and flowerbed[i+1]==0){
                                                    flowerbed[i]=1;
                                                    n-=1;
                                            }

                                }
                         } 
                            
                }
                if(n!=0){
                        return false;
                }
        
                cout<<n<<endl;
                return true;
                            
    }
};