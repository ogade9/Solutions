class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> chars;
        for(char i: sentence){
            chars.insert(i);
        }
        if(chars.size()==26){
            return true;
        }
        return false;
    }
};