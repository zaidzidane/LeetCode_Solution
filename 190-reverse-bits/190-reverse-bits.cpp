class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t ans=0;
        int cnt=0;
        while(cnt<32){
            ans=ans<<1;
            ans|=n&1;
            cout<<ans<<endl;
            n=n>>1;
            cnt++;
        }
        
        return ans;
        
    }
};