int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
    
        int l=0;
        int r=n-1;
        int res=-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(m==0)
            {
                if(nums[0]!=nums[1])
                {
                    return nums[0];
                }
            }
            else if(m==n-1)
            {
                if(nums[m]!=nums[m-1])
                {
                    return nums[m];
                }
                
            }
            else if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1])
            {
                res=nums[m];
                break;
                
            }
            else if((m%2!=0 && nums[m]==nums[m-1]) || (m%2==0 && nums[m]==nums[m+1]))
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        return res;
        
        
    }
