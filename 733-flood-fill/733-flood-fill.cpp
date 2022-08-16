class Solution {
public:
    
    
    void colour(vector<vector<int>>&df,vector<vector<int>>&images,int sr, int sc,int check,int color){
        
                
                 
                if(sr>=images.size() or sc>=images[0].size() or images[sr][sc]!=check or df[sr][sc]==1){
                            return;  
                }
        
                else{
                    
                           
                            images[sr][sc]=color;  
                            df[sr][sc]=1;
                            colour(df,images,sr+1,sc,check,color);
                            colour(df,images,sr-1,sc,check,color);
                            colour(df,images,sr,sc+1,check,color);
                            colour(df,images,sr,sc-1,check,color);
                }
                
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
            int check=image[sr][sc];        
            vector<vector<int>>df(image.size(),vector<int>(image[0].size(),0));
            colour(df,image,sr,sc,check,color);
            
            return image;
            
            
            
        
    }
};