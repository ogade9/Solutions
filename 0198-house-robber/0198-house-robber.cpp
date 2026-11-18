class Solution {
public:
    int rob(vector<int>& nums) {
        int results = 0;
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        int n = nums.size();
        vector<int> seen(n,0);
        seen[0] = nums[0];
        seen[1] = max(nums[1],nums[0]);
        for(int i = 2; i<seen.size(); i++){
            results = nums[i] + seen[i-2];
            seen[i]=max(seen[i-1],results);
        }
        return seen[n-1];
    }
};