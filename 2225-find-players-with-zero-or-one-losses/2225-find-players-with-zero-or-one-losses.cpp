class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> loss_one;
        vector<int> loss_zero;
        vector<vector<int>> answer;
        int count = 1;
        int count_w = 1;
        unordered_map<int,int> m;
        unordered_map<int,int> n;
        for(int i=0;i<matches.size();i++){
            if(m.contains(matches[i][1])){
                count++;
                m[matches[i][1]] = count;
            }
            if(n.contains(matches[i][0])){
                count_w++;
                n[matches[i][0]] = count_w;
            }
            if(!m.contains(matches[i][1])){
                m[matches[i][1]] = 1;
            }
            if(!n.contains(matches[i][0])){
                n[matches[i][0]] = 1;
            }
        }
        for(const auto& [key,value] : m){
            if(value == 1){
                loss_one.push_back(key);
            }
            if(n.contains(key)){
               n.erase(key);
            }
        }
        for(const auto& [key,value] :n){
            loss_zero.push_back(key);
        }
        
        sort(loss_one.begin(),loss_one.end());
        sort(loss_zero.begin(),loss_zero.end());
        answer.push_back(loss_zero);
        answer.push_back(loss_one);
        return answer;
        
    }
};