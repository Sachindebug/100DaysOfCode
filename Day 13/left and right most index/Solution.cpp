pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        pair<long, long> res;
        long long int n=v.size();
        long long l=0,r=n-1;
        long long res1=-1;
        long long res2=-1;
        while(l<=r)
        {
            long long m=l+(r-l)/2;
            if(v[m]==x)
            {
                res1=m;
                r=m-1;
                
            }
            else if(v[m]>x)
            {
                r=m-1;
            }
            else 
            {
                l=m+1;
            }
        }
        l=0,r=n-1;
        while(l<=r)
        {
            long long m=l+(r-l)/2;
            if(v[m]==x)
            {
                res2=m;
                l=m+1;
                
            }
            else if(v[m]>x)
            {
                r=m-1;
            }
            else 
            {
                l=m+1;
            }
        }
        res.first=res1;
        res.second=res2;
        return res;
        
    }
