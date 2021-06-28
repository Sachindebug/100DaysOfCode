void rotateArr(int arr[], int d, int n){
        // code here
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
    }
