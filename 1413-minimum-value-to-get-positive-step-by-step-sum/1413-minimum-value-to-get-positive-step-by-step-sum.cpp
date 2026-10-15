class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        vector<int> vect;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];   
            vect.push_back(sum);

        }
        int min = 0;
        for(int i: vect){
            if(i < min){
                min = i;
            }
        }
        int startValue = 1 - min;
        return startValue;
        
    }
};