class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }
        int results = 0;
        vector<int> seen(n+1);
        seen[0] = 1;
        seen[1] = 1;
        for(int i=2; i < seen.size();i++){
            results = seen[i-1] + seen[i-2];
            seen[i] = results;
        }
        return seen[n];
        
    }
};