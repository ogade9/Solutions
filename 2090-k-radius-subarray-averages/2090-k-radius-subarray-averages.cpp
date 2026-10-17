class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long sum = 0;
        int length = nums.size();
        int left =0;
        int i =0;
        int avg = 0;
        int center = 0;
        int div = 0;
        vector<int> avgs(length,-1);
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            div = i-left;
            if(div == 2*k){
                avg = sum/(div+1);
                sum -= nums[left];
                left++;
                avgs[i-k] = avg;                
            }
            else{
                avgs[i] = -1;
            }
        }
        return avgs;
    }
};