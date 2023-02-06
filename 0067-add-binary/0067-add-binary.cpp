class Solution {
public:
    
    string addBinary(string a, string b) {
    
            int i=a.size()-1;
            int j=b.size()-1;
           
            bool carry=false;
            string ans="";
            while(i>=0 or j>=0){
                
                    if(j==-1){
                         
                            if(carry and a[i]=='1'){
                                       
                                        ans+="0";
                                        
                            }
                            else if(carry and a[i]=='0'){
                                
                                        ans+="1";
                                        carry=false;
                            }
                        
                            else if(!carry and a[i]=='1')
                        
                                        ans+="1";
                        
                            else if(!carry and a[i]=='0')
                        
                                        ans+="0";
                        
                            i--;
                            
                                        
                    } 
                
                    else if(i==-1){
                          
                             if(carry and b[j]=='1'){
                                
                                        ans+="0";
                                        
                            }
                           else  if(carry and b[j]=='0'){
                                
                                        ans+="1";
                                        carry=false;
                            }
                        
                            else if(!carry and b[j]=='1')
                        
                                        ans+="1";
                        
                           else  if(!carry and b[j]=='0')
                        
                                        ans+="0";
                        
                            j--;
                    }
                
                    else{
                           
                            if(carry and a[i]=='1' and b[j]=='1'){

                                        ans+="1";
                                        
                            }
                           else if(carry and a[i]=='0' and b[j]=='0'){
                                
                                        ans+="1";
                                        carry=false;
                            }
                        
                            else if(!carry and a[i]=='1' and b[j]=='1'){
                                             
                                        carry=true;
                                        ans+="0";
                                
                            }
                            else if(!carry and a[i]=='0' and b[j]=='0')
                        
                                        ans+="0";
                        
                        
                            else if(carry and a[i]=='1' and b[j]=='0'){
                                
                                        ans+="0";
                                        
                            }
                            else if(carry and a[i]=='0' and b[j]=='1'){
                                
                                        ans+="0";
                                        
                            }
                        
                           else if(!carry and a[i]=='1' and b[j]=='0'){
                                             
                                      
                                        ans+="1";
                                
                            }
                           else if(!carry and a[i]=='0' and b[j]=='1'){
                        
                                        ans+="1";
                                        cout<<"yes";
                        
                           }
                        
                            i--;
                            j--;
                    }
                
                   
                
            }
        
            if(carry)
                 ans+="1";
            reverse(ans.begin(),ans.end());
            return ans;
        
    }
};