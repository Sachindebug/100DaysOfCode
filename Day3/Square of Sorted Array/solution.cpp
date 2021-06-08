vector<int> sortedSquares(vector<int>& arr) {
        
        int j=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                j=i;
                break;
            }
        }
        vector<int> res;
        int i;
        if(j==-1)
        {
            i=arr.size()-1;
        }
        else 
        {
            i=j-1;
        }
         
        
        while(j<arr.size() && i>=0)
        {
            if(abs(arr[i])>=arr[j])
            {
               
                res.push_back(arr[j]*arr[j]);
                 j++;
            }
            else
            {
               
                res.push_back(arr[i]*arr[i]);
                 i--;
                
            }
        }
        int n=arr.size();
        while(j<n)
        {
            res.push_back(arr[j]*arr[j]);
            j++;
        }
        while(i>=0)   
        {
            res.push_back(arr[i]*arr[i]);
            i--;
            
        }
        return res;
            
 }
