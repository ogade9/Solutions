class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int results = 0;
        if(amount == 0){
            return 0;
        }
        if(n == 1 && amount%coins[0]==0){
            return amount/coins[0];
        }
        if(n == 1 && amount%coins[0] != 0){
            return -1;
        }      
        vector<int> seen(amount+1,amount+1);
        seen[0] = 0;
        for(int i = 0; i < coins.size(); i++){        
            for(int j=coins[i]; j < seen.size();j++){
                results = 1 + seen[j-coins[i]];
                seen[j] = min(results,seen[j]);
            }
        }
        if(seen[amount] == (amount+1)){
                    return -1;
        }
        return seen[amount];
    }
};