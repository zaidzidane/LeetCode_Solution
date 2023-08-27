class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
            unordered_map<string,int>gzip;
            unordered_set<string>seen;
            for(auto word:wordList){    
                    gzip[word]=1;            
            }
            queue<pair<string,int>>q;
            q.push({beginWord,1});
            seen.insert(beginWord);
            while(!q.empty()){
                    auto ans=q.front();
                    cout<<ans.first<<endl;
                    q.pop();
                    if(ans.first==endWord)
                            return ans.second;                    
                    for(int i=0;i<ans.first.size();i++){
                                for(int k=0;k<26;k++){
                                            char val=ans.first[i];
                                            ans.first[i]= 'a'+k;
                                            
                                            if(gzip.find(ans.first)!=gzip.end() and seen.find(ans.first)==seen.end()){
                                                            q.push({ans.first,ans.second+1});
                                                            seen.insert(ans.first);
                                                
                                            }  
                                    
                                             ans.first[i]=val;
                                }    
                               
                    }
            }
            return 0;
    }
};