class Solution {
public:
    string makeGood(string s) {
        stack<char> temp;
        string result;
        if(s.size()==1){
            return s;
        }
        for(int i=0; i<s.size();i++){
            if(temp.empty()){
                temp.push(s[i]);
            }
            else if((s[i] == toupper(temp.top()) || toupper(s[i]) == temp.top()) && (isupper(s[i]) != isupper(temp.top()))){
                temp.pop();
            }
            else{
                temp.push(s[i]);
            }
        }
        while(!temp.empty()){
            result += temp.top();
            temp.pop();
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};