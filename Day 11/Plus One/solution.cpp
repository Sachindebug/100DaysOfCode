vector<int> increment(vector<int> arr ,int N) {
        // code here
        vector<int> res;
        int carry=1;
        for(int i=N-1;i>=0;i--)
        {
            int x=arr[i]+carry;
            if(x>=10)
            {
                carry=1;
                x=x%10;
                
                
            }
            else
            {
                carry=0;
            }
            res.push_back(x);
            
        }
        if(carry==1)
        {
            res.push_back(1);
        }
        reverse(res.begin(),res.end());
        return res;
    }
