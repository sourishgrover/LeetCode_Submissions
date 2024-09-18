class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
         int CurrSum = 0;

        int maxSum = INT_MIN;

        for(int i = 0; i<n ; i ++){
           
            CurrSum += nums[i];

            maxSum = max(maxSum,CurrSum);

            if(CurrSum < 0){
               CurrSum = 0;
            }
        }

        return maxSum;
    }
};