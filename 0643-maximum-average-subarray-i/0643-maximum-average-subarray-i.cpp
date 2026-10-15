class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double sum = 0;
        double ans = 0;
        double maxAverage = -DBL_MAX;
        if(nums.size() == 1){
            return static_cast<double>(nums[0]);
        }
        for(int i=0; i<nums.size();i++){
            sum = sum + nums[i];
            while((i-left)+1 == k){
                ans = sum/k;
                maxAverage = max(maxAverage,ans);
                sum -= nums[left];
                left++;
            }
            
        }
        return maxAverage;
        
    }
};