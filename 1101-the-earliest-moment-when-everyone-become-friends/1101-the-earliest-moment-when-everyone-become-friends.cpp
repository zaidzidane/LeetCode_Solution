class Solution {
public:
        class DSU{
        
        public:
        vector<int>root;
        vector<int>rank;
        int count;
        
        DSU(int n){
                count=n;
                for(int i=0;i<n;i++){
                        root.push_back(i);
                        rank.push_back(1);
                }    
        }
        int findset(int x){
                if(x==root[x]){
                        return x;
                }
                return root[x]=findset(root[x]);
        }
        
        void unionset(int x,int y){
                int rootx=findset(x);
                int rooty=findset(y);
                if(rootx!=rooty){
                            
                        if(rank[rootx]>rank[rooty]){
                                root[rooty]=rootx;
                        }
                        else if(rank[rooty]>rank[rootx]){
                                root[rootx]=rooty;
                        }
                        else{
                                root[rooty]=rootx;
                                rank[rootx] += 1;
                        }
                    count--;
                }       
        }
           
    };
    
    static bool compare(vector<int>a,vector<int>b){
        
            return a[0]<b[0];
    }
    
    int earliestAcq(vector<vector<int>>& logs, int n) {
        
        DSU g(n); 
        sort(logs.begin(),logs.end(),compare);
        int timestamp;
        for(vector<int>edge:logs){
                    int first=edge[0];
                    int second=edge[1];
                    int third=edge[2];
                    cout<<first<<second<<third<<endl;
                    int s1=g.findset(second);
                    int s2=g.findset(third);
                    if(s1!=s2){
                                timestamp=first;
                                g.unionset(s1,s2);
                    }
        }
        
        if(g.count>1){
            return -1;
        }
        
        
       return timestamp; 
    }
};