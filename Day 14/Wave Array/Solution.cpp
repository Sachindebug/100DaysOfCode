void convertToWave(int *arr, int n){
        
        // Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            swap(arr[i],arr[i+1]);
            i++;
        }
        
    }
