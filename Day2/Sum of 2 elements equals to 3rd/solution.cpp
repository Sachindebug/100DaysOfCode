vector<int> findTriplets(vector<int> &arr, int n) 
{
    //Write your code here.
    vector<int> res;
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<n-2;i++)
    {
        int req=arr[i];
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            if(arr[l]+arr[r]>req)
            {
                l++;
            }
            else if(arr[l]+arr[r]<req)
            {
                r--;
            }
            else 
            {
                res.push_back(arr[l]);
                res.push_back(arr[r]);
                res.push_back(req);
                sort(res.begin(),res.end());
                return res;
            }
        }
    }
    return res;
}
