long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
       sort(a.begin(),a.end());
       long long int l=INT_MAX;
       for(long long i=0;i<=n-m;i++)
       {
           long long diff=a[i+m-1]-a[i];
           if(diff<l)
           {
               l=diff;
           }
       }
       return l;
    
    
    }   
