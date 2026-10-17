class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string target = "balloon";
        int num =0;
        int mins = INT_MAX;
        unordered_map<char,int> t;
        for(int i=0;i<text.length();i++){
            t[text[i]]++;  
        }
        for(char i: target){
            if(i=='o' || i=='l'){
                num = t[i]/2;
            }
            else if(i=='b' || i=='a' || i=='n'){
                num = t[i]/1;
            }
            mins = min(mins,num);            
        }
        return mins;
    }
};