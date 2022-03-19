class ParkingSystem {
public:
    
    
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    ParkingSystem(int big, int medium, int small) {
                cnt1=big;
                cnt2=medium;
                cnt3=small;
    }
    
    bool addCar(int carType) {
        
                if(carType==1){
                        
                        if(cnt1>0){
                                cnt1--;
                                return true;
                        }
                        else{
                                return false;
                        }
                        
                }  
        
        
                if(carType==2){
                        
                        if(cnt2>0){
                                cnt2--;
                                return true;
                        }
                        else{
                                return false;
                        }
                        
                }
        
            
                if(carType==3){
                        
                        if(cnt3>0){
                                cnt3--;
                                return true;
                        }
                        else{
                                return false;
                        }
                        
                }
                
                return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */