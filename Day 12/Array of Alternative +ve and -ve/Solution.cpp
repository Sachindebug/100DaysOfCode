void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos;
	    vector<int> neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            pos.push_back(arr[i]);
	        }
	        else
	        {
	            neg.push_back(arr[i]);
	        }
	    }
	    int l=pos.size();
	    int r=neg.size();
	    int i=0,j=0,k=0;
	    while(i<n && j<l && k<r)
	    {
	        if(i%2==0)
	        {
	            arr[i]=pos[j];
	            i++;
	            j++;
	        }
	        else
	        {
	            arr[i]=neg[k];
	            i++;
	            k++;
	        }
	    }
	    while(i<n && j<l)
	    {
	        arr[i]=pos[j];
	        i++;
	        j++;
	    }
	    while(i<n && k<r)
	    {
	        arr[i]=neg[k];
	        i++;
	        k++;
	    }
	    
	}
	
