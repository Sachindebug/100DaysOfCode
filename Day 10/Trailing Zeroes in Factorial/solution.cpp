int trailingZeroes(int N)
    {
        // Write Your Code here
        int p=5;
        int count=0;
        
        
        while(N/p>0)
        {
            
            count+=(N/p);
            p*=5;
        }
        return count;
    }
