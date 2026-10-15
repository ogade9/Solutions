class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right= 0;
        int count_ones = 0;
        int zeroes = 0;
        int max_ones = 0;
        for(int i=0;i<nums.size();i++){
            right = i;
            if(nums[i]==0){
                zeroes++;
            }
            
            while(zeroes > k){
                if(nums[left]==0){
                    zeroes = zeroes-1;
                }
                left++;
            }
                max_ones = max(max_ones, right-left+1);
                
        }
        return max_ones;

    }
};