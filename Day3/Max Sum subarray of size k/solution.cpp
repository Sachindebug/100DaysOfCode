int maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        int res=0;
        for(int i=0;i<k;i++)
        {
            res+=arr[i];
        }
        int curr=res;
        for(int i=k;i<n;i++)
        {
            curr=curr+arr[i]-arr[i-k];
            if(curr>res)
            {
                res=curr;
            }
        }
        return res;
    }
