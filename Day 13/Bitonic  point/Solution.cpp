	int findMaximum(int arr[], int n) {
	    // code here
	    int l=0,r=n-1;
	    while(l<=r)
	    {
	        int m=l+(r-l)/2;
	        if(arr[m-1]<arr[m] && arr[m]>arr[m+1])
	        {
	            return arr[m];
	        }
	        else if(arr[m-1]<arr[m] && arr[m]<arr[m+1])
	        {
	            l=m+1;
	        }
	        else 
	        {
	            r=m-1;
	        }
	    }
	    return arr[n-1];
	    
	}
