class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
    //    optimal
        // int zeros = 0 ,ones = 0,twos = 0;

        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i]==0){
        //        zeros++;
        //     }
        //     else if(nums[i]==1){
        //        ones++;
        //     }
        //     else{
        //         twos++;
        //     }
        // }
        //  int index = 0;
        //  for(int i=0; i < zeros ; i++){
        //     nums[index++]=0;
        //  }
        //  for(int i=0; i < ones ; i++){
        //     nums[index++]=1;
        //  }
        //  for(int i=0; i < twos ; i++){
        //     nums[index++]=2;
        //  }


        // DNF
        int mid = 0 , low = 0 , high = n-1;

        while(mid<=high){

            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                 mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};