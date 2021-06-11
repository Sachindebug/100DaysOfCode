int findMaxConsecutiveOnes(vector<int>& arr) {
        int mx=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==1)
            {
                count++;
                if(count>mx)
                {
                    mx=count;
                }
            }
            else
            {
                
                count=0;
            }
        
            
        }
        return mx;
        
    }
