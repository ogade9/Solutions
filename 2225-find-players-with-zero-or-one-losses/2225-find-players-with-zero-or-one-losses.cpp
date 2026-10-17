class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> loss_one;
        vector<int> loss_zero;
        unordered_map<int,int> m;
        for(int i=0;i<matches.size();i++){
                int winner = matches[i][0];
                int loser = matches[i][1];
            if(m.find(winner) == m.end()){
                m[winner] = 0;
            }
            if(m.find(loser) == m.end()){
                m[loser] = 0;
            }
            m[loser]++;
        }
        for(const auto& [key,value] : m){
            if(value == 1){
                loss_one.push_back(key);
            }
            if(value==0){
                loss_zero.push_back(key);
            }
        }
        sort(loss_one.begin(),loss_one.end());
        sort(loss_zero.begin(),loss_zero.end());
        return {loss_zero, loss_one};
        
    }
};