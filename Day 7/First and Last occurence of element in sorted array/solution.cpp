vector<int> searchRange(vector<int>& arr, int x) {
    vector<int> v;
    int res1=-1,res2=-1;
    int n=arr.size();
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)
        {
            res1=mid;
            r=mid-1;
        }
        else if(arr[mid]>x)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
    l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)
        {
            res2=mid;
            l=mid+1;
        }
        else if(arr[mid]>x)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
        v.push_back(res1);
        v.push_back(res2);
        return v;
        
    }
