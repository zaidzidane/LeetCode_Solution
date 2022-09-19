class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        
            unordered_map<string,vector<string>>gzip;
            
            for(auto item:paths){
                
                    stringstream ss(item);
                    string path;
                    string file;
                    string content;
                    ss>>path;
                    while(ss>>file){
                        
                            int ocr=file.find('(');
                            string content=file.substr(ocr,file.size()-1);
                            gzip[content].push_back(path+"/"+file.substr(0,ocr));
                        
                        
                    }
                   
            } 
        
        
            vector<vector<string>>ans;
        
            for(auto item:gzip){
                    if(item.second.size()==1) continue;
                    ans.push_back({item.second});
                
            }
        
            return ans;
    }
};