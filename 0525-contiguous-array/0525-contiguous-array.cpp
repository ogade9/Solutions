class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int left = 0;
        int max_ = 0;
        int ans = 0;
        int count =0;
        unordered_map<int,int> binary;
        binary[0] = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count--;
            }
            if(nums[i]==1){
                count++;
            }
            if(binary.contains(count)){
                int index = binary[count];
                ans = i-index;
                max_ = max(max_,ans);
            }
            else{
                binary[count] = i;
            }

        }
        return max_;
    }
};