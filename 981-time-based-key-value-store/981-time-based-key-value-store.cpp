class TimeMap {
public:
    
    
    unordered_map<string,vector<int>>gzip;
    unordered_map<int,string>item;
    //vector<int>ans;

    TimeMap() {
   
        
    }
    
    void set(string key, string value, int timestamp) {
        
        gzip[key].push_back(timestamp);
        item[timestamp]=value;
    
        
    }
    
    string get(string key, int timestamp) {
        
     

        int left=0;
        int right=gzip[key].size()-1;
        int mid;
        //cout<<left<<"\t"<<right<<endl;
        while(left<=right){
              
                mid=left+(right-left)/2;
                if(gzip[key][mid]==timestamp){
                        right=mid;
                        break;
                }
                else if(gzip[key][mid]>timestamp){
                            right=mid-1;
                }
                else{
                            left=mid+1;           
                }    
        }
        
        
       
        if(right<0){
                return "";
        }
        if(left>gzip[key].size()-1){
                 return item[gzip[key][gzip[key].size()-1]];
        }
        
        return item[gzip[key][right]];
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */