class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        
        unordered_map<string,int>gzip;
        unordered_set<string>visited;
        for(auto item:bank){
                gzip[item]=1;
        }  
        if(gzip.find(endGene)==gzip.end()){
                    return -1;   
        }
        vector<char>v{'A','C','G','T'};
        queue<pair<string,int>>q;
        q.push({startGene,0});
        visited.insert(startGene);
        while(!q.empty()){
                pair<string,int>ans=q.front();
                // cout<<ans.first<<endl;
                if(ans.first==endGene)
                {
                    return ans.second;
                }
                q.pop();
                for(int i=0;i<ans.first.size();i++){
                        for(int j=0;j<4;j++){
                                if(ans.first[i]==v[j])
                                        continue;
                                char val=ans.first[i];
                                ans.first[i] = v[j];
                                if(gzip.find(ans.first)!=gzip.end() and visited.find(ans.first)==visited.end()){
                                        q.push({ans.first,ans.second+1});
                                        visited.insert(ans.first);
                                }
                                ans.first[i]=val;
                        }
                }
        }
        
        return -1;
    }
};