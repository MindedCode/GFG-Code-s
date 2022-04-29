****/This is a largest sub sum array. "Kadane's Algorithm"/****  
long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxsum=0; 
        int cursum=0;
        for(int i=0;i<n; i++)
        {
            cursum=cursum+arr[i];
            if(cursum>maxsum)
                {
                    maxsum=cursum;
                }
            if(cursum<0)
            {
                cursum = 0;
            }
        }
    return maxsum;
        
    }
};
