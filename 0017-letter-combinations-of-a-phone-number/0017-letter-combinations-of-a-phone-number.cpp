class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
            vector<vector<char>>phone{
                {},
                {'a','b','c'},
                {'d','e','f'},
                {'g','h','i'},
                {'j','k','l'},
                {'m','n','o'},
                {'p','q','r','s'},
                {'t','u','v'},
                {'w','x','y','z'}
            };
        
            if(!digits.size()){
                
                    return {};
            }
            
            vector<string>ans;
            for(int i=0;i<phone[digits[0]-'1'].size();i++){
                    string str;
                    str+=phone[digits[0]-'1'][i];
                    ans.push_back(str);
                    // cout<<i<<endl;
            } 
        
            int i=1;
            
//             for(int i=0;i<ans.size();i++){
//                     cout<<ans[i]<<endl;
                
//             }
        
            while(i<digits.size()){
                    
                    vector<string>temp;
                    for(int j=0;j<ans.size();j++){
                        int val=digits[i]-'1';
                        for(int k=0;k<phone[val].size();k++){
                                       temp.push_back(ans[j]+phone[val][k]); 
                        }
                    }
                    ans=temp;
                    i+=1;
            }
        
            return ans;
    }
};