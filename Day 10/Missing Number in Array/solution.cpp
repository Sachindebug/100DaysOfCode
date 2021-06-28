int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=0;
        for(auto x:array)
        {
            sum+=x;
        }
        int res=n*(n+1)/2;
        return res-sum;
    }
