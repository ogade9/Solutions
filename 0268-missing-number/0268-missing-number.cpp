class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int complement = 0;
        int val = 0;
        unordered_set<int> numbers;
        for(int i:nums){
            numbers.insert(i);
        }
        for(int i=0;i<=nums.size(); i++){
            if(!(numbers.contains(i))){
                val = i;
            }
        }   
        return val;
        
    }
};