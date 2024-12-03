  int maxSubarraySum(vector<int> &arr) {
        // code here...
        int maxSum=INT_MIN;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum>maxSum)
            {
                maxSum=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxSum;
    }
