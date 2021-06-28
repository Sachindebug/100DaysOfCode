vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       
        //code here   
        vector<long long int> res;
        long long int p=1;
        int count0=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count0++;
            }
        }
        if(count0==0)
        {
            for(int i=0;i<n;i++)
            {
               p*=arr[i];
            }
            for(int i=0;i<n;i++)
            {
               res.push_back(p/arr[i]);
            }
            
            
        }
        else if(count0==1)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=0)
                {
                     p*=arr[i];
                }
              
            }
            for(int i=0;i<n;i++)
            {
               if(arr[i]==0)
               res.push_back(p);
               else
               {
                   res.push_back(0);
               }
            }
        }
        else if(count0>1)
        {
            for(int i=0;i<n;i++)
            {
                 res.push_back(0);
               
            }
            
        }
        return res;
        
    }
