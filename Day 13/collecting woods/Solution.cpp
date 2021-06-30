int find_height(int tree[], int n, int k)
    {
        // code here
        int h=*max_element(tree,tree+n);
        int l=0;
        int r=h;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int w=0;
            for(int i=0;i<n;i++)
            {
                if(tree[i]>mid)
                w+=(tree[i]-mid);
            }
            
            if(w==k)
            {
                return mid;
            }
            else if(w>k)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            
        }
        return -1;
        
        
    }
