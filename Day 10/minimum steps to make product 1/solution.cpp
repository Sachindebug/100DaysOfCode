int makeProductOne(int arr[], int N) {
        // code here
        int pos=0,neg=0,zero=0,sum=0;
        
        for(int i=0;i<N;i++)
        {
            if(arr[i]>0)
            {
                pos++;
                
            }
            else if(arr[i]<0)
            {
                neg++;
            }
            else
            {
                zero++;
            }
        }
        for(int i=0;i<N;i++)
        {
            if(arr[i]>0)
            {
                sum+=(arr[i]-1);
                
            }
            else if(arr[i]<0)
            {
                sum+=(-1-arr[i]);
            }
            else
            {
                sum++;
            }
        }
        
        if(zero>0)
        {
            sum=sum;
            
        }
        
        else
        {
            if(neg%2==0)
            {
                sum=sum;
                
            }
            else
            {
                sum=sum+2;
            }
        }
        return sum;
    }
