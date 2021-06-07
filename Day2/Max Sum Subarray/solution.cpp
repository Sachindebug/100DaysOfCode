long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxSum = 0, curSum = 0;

    for(int i=0; i<n; i++)
    {
        curSum+=arr[i];
        if(curSum>maxSum)
        {
            maxSum=curSum;
        }
        if(curSum<0)
        {
            curSum=0;
        }
    }

    return maxSum;
}
