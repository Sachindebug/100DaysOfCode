int majorityElement(int arr[], int n)
    {
        
        // your code here
        if(n==1)
        {
            return arr[0];
        }
        sort(arr,arr+n);
        int i=1;
        int p=(n/2)+1;
        int count=1;
        while(i<n)
        {
            if(arr[i]==arr[i-1])
            {
                count++;
                if(count>=p)
                {
                    return arr[i-1];
                }
            }
            else
            {
                count=1;
                
            }
            i++;
            
        }
        return -1;
        
    }
